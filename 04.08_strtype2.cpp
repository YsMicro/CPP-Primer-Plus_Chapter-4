#include "head.h"
#include <string>

int strtype2()
{
    string s1 = "penguin";
    string s2, s3;

    cout << "你可以分配一个 String 对象给另一个：s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "你可以分配一个 C 风格字符串给一个字符串对象。\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "你可以连接字符串：s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "你可以附加字符串。\n";
    s1 += s2;
    cout << "s1 += s2 得到 s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" 得到 s2 = " << s2 << endl;
    return 0;
}