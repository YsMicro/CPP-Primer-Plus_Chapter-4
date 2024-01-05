#include "head.h"

int instr3()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "输入姓名：\n";
    cin.get(name, ARSIZE).get();//读取字符串，换行符
    cout << "输入你最喜欢的甜品：\n";
    cin.get(dessert, ARSIZE).get();
    cout << "我有美味的 " << dessert;
    cout << " 给你，" << name << " 。\n";
    return 0;
}