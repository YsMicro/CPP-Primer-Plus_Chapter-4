#include "head.h"
#include <string>

int practice_2()
{
    const int ARSIZE = 20;
    string name;
    string dessert;

    cout << "输入姓名：\n";
    getline(cin, name);
    cout << "输入你最喜欢的甜品：";
    getline(cin, dessert);
    cout << "我有美味的 " << dessert;
    cout << " 给你，" << name << " 。\n";
    return 0;
}