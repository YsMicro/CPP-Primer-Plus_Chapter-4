#include "head.h"
#include <string>

int practice_4()
{
    string first_name, last_name;
    string full_name;

    cout << "输入你的firstname：";
    getline(cin, first_name);
    cout << "输入你的lastname：";
    getline(cin, last_name);
    full_name = last_name + ", " + first_name;
    cout << "在单个字符串中显示信息：" << full_name << endl; 
    return 0;
}