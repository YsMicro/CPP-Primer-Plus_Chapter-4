#include "head.h"
#include <string>
//#include <cstring>

int strtype3()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    //为String对象和字符数组分配
    str1 = str2;
    strcpy_s(charr1, charr2);

    //为String对象和字符数组附加
    str1 += " paste";
    strcat_s(charr1, " juice");

    //获取字符串和C风格字符串的长度
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "字符串 " << str1 << " 包含 "
        << len1 << " 个字符。\n";
    cout << "字符串 " << charr1 << " 包含 "
        << len2 << " 个字符。\n";
    return 0;
}