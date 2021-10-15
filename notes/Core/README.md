# QT Core
## 元对象系统
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

## 