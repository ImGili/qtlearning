/*
 * @Author: ImGili
 * @Description: 
 */
#include"qtlearning/1_create_window.h"
#include<iostream>
int main(int argc, char *argv[])
{
    int no = 1;
    std::cout << "11、初始化一个窗口" << std::endl;
    std::cout << "12、初始化一个窗口" << std::endl;

    std::cin >> no;
    switch (no)
    {
    case 11:
        glx0101::main(argc, argv);
        break;
    case 12:
        glx0102::main(argc, argv);
        break;
    default:
        break;
    }
}