#include "head.h"

int instr2()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "输入姓名：\n";
    cin.getline(name, ARSIZE);
    cout << "输入你最喜欢的甜品：";
    cin.getline(dessert, ARSIZE);
    cout << "我有美味的 " << dessert;
    cout << " 给你，" << name << " 。\n";
    return 0;
}