#include "head.h"

int instr1()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "你的名字：\n";
    cin >> name;
    cout << "你最喜欢的甜点：\n";
    cin >> dessert;
    cout << "我有美味的 " << dessert;
    cout << " 给你，" << name << "。\n";
    return 0;
}