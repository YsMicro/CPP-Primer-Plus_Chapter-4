//在数组中存储字符串
#include "head.h"
#include <cstring>

int strings()
{
    const int SIZE = 15;
    char name1[SIZE] = {0};//空数组
    char name2[SIZE] = "C++owboy";//初始化数组

    cout << "Howdy! I'm " << name2;
    cout << " ！ What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << " ,your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " Bytes.\n";
    cout << "Youe initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of mt name: ";
    cout << name2 << endl;
    return 0;
}