# QT Core
## 元对象系统
元对象提供的是``动态属性``、``信号（signals）``、``插槽（slots）``和``运行时类型信息``

任何元对象的子类，都需要使用``Q_OBJECT``宏，这样才能使用信号和槽特性，才能拥有子类所有的属性，否则只能有最近父类的属性，并且无信号和槽的特性。

### qobject_cast(动态投射）
```c++
QObject *obj = new MyWidget;

QWidget *widget = qobject_cast<QWidget *>(obj); // 投影正确

MyWidget *myWidget = qobject_cast<MyWidget *>(obj); // 投影正确，因为obj实际就是MyWidget指针

QLabel *label = qobject_cast<QLabel *>(obj); // 无法投影，因为obj不是QLabel，所以返回nullptr = 0


// 动态投影的用法
if (QLabel *label = qobject_cast<QLabel *>(obj)) {
    label->setText(tr("Ping"));
} else if (QPushButton *button = qobject_cast<QPushButton *>(obj)) {
    button->setText(tr("Pong!"));
}

```

## 属性系统（Property System）
属性注册
```c++
class MyClass : public QObject
{
    Q_OBJECT
    // 注册一个QT属性
    Q_PROPERTY(Priority priority READ priority WRITE setPriority NOTIFY priorityChanged)
    // READ 设置的是属性的访问函数
    // WRITE 设置的是属性的写入函数
    // NOTIFY 设置的是属性在收到属性改变信号时，怎么处理属性
public:
    MyClass(QObject *parent = nullptr);
    ~MyClass();

    enum Priority { High, Low, VeryHigh, VeryLow };

    // 在QT中注册这个枚举类， 这样就能以object->setProperty("priority", "VeryHigh")，这种字符串形式访问枚举类
    Q_ENUM(Priority) 


    void setPriority(Priority priority)
    {
        m_priority = priority;
        emit priorityChanged(priority);
    }
    Priority priority() const
    { return m_priority; }

signals:
    void priorityChanged(Priority);

private:
    Priority m_priority;
};
```

属性访问
```c++
MyClass *myinstance = new MyClass;
QObject *object = myinstance;

myinstance->setPriority(MyClass::VeryHigh);
object->setProperty("priority", "VeryHigh");
```

## 对象树和从属关系（Object tree&Ownership）
以下情况``quit``对象被析构了两次
```c++
#include <QtWidgets>
#include <QVariant>
#include <QPushButton>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton quit("Quit"); // quit后创建，后析构，会被析构两次
    QWidget window;  // window后创建，先析构，同时析构quit

    quit.setParent(&window);

    return 0;
}
```

## 信号与槽(signals and slots)
信号的参数必须大于等于槽的参数

以下方式是可行的
```c++
connect(sender, SIGNAL(destroyed(QObject*)), this, SLOT(objectDestroyed(Qbject*)));
connect(sender, SIGNAL(destroyed(QObject*)), this, SLOT(objectDestroyed()));
connect(sender, SIGNAL(destroyed()), this, SLOT(objectDestroyed()));
```

以下方式是不可行的
```c++
connect(sender, SIGNAL(destroyed()), this, SLOT(objectDestroyed(QObject*)));
```