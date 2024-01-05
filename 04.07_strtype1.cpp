//使用C++String类
#include "head.h"
#include <string>

int strtype1()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    cout << "输入一种猫科动物：";
    cin >> charr1;
    cout << "输入另一种猫科动物：";
    cin >> str1;//使用 cin 以输入
    cout << "这里有一些猫科动物：";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2 //使用 cout 以输出
        << endl;
    cout << charr2 << " 的第三个字母是 " << charr2[2] << endl;
    cout << str2 << " 的第三个字母是 " << str2[2] << endl;//使用数组表示法
    return 0;
}