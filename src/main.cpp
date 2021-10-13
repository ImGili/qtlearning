/*
 * @Author: ImGili
 * @Description: 
 */
#include"qtlearning/1_widget.h"
#include"stdlib.h"
#include"string.h"
int main(int argc, char *argv[])
{
    int no = 101;

    if (argc == 2)
    {
        no = atoi(argv[1]);
    }
    
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
    case 108:
        glx0108::main(argc, argv);
        break;
    default:
        break;
    }
}