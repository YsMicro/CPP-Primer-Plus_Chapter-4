#include "head.h"

int numstr()
{
    cout << "你房子哪年造的？\n";
    int year;
    cin >> year;
    cin.get();
    cout << "你房子在哪条街？\n";
    char address[80];
    cin.getline(address, 80);
    //cin >> address;
    cout << "建造年份：" << year << endl;
    cout << "地址：" << address << endl;
    cout << "完毕！\n";
    return 0;
}