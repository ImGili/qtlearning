/*
 * @Author: ImGili
 * @Description: 
 */
#include"qtlearning/1_widget.h"
#include<iostream>
int main(int argc, char *argv[])
{
    int no = 1;
    std::cout << "101、初始化一个窗口" << std::endl;
    std::cout << "102、添加子组件" << std::endl;
    std::cout << "103、设置布局" << std::endl;
    std::cout << "104、Model/View模型案例" << std::endl;
    std::cout << "105、简单实用Model" << std::endl;
    std::cout << "106、多个View使用同一个Model" << std::endl;
    std::cout << "107、多个View使用同一个SelectModel" << std::endl;

    std::cin >> no;
    switch (no)
    {
    case 101:
        glx0101::main(argc, argv);
        break;
    case 102:
        glx0102::main(argc, argv);
        break;
    case 103:
        glx0103::main(argc, argv);
        break;
    case 104:
        glx0104::main(argc, argv);
        break;
    case 105:
        glx0105::main(argc, argv);
        break;
    case 106:
        glx0106::main(argc, argv);
        break;
    case 107:
        glx0107::main(argc, argv);
        break;
    default:
        break;
    }
}