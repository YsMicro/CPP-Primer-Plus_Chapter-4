#include "head.h"
#include <string>
#include <cstring>

int strtype4()
{
    char charr[20];
    string str;

    cout << "输入前 charr 字符串的长度："
        << strlen(charr) << endl;
    cout << "输入前 str 字符串的长度："
        << str.size() << endl;
    cout << "键入一行文本：\n";
    cin.getline(charr, 20);//指出最大长度
    cout << "你输入了：" << charr << endl;
    cout << "键入另一行文本：\n";
    getline(cin, str);//cin 现在是参数；没有长度指示符
    cout << "你输入了：" << str << endl;
    cout << "输入后 charr 字符串的长度："
        << strlen(charr) << endl;
    cout << "输入后 str 字符串的长度："
        << str.size() << endl;

    return 0;
}