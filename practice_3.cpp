#include "head.h"
//#include <cstring>
int practice_3()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    cout << "你的First Name:";
    cin.getline(first_name, 20);
    cout << "你的Last Name:";
    cin.getline(last_name, 20);
    strcpy_s(full_name, last_name);
    strcat_s(full_name, ", ");
    strcat_s(full_name, first_name);
    cout << "在单一字符串中显示信息" << full_name << endl;

    return 0;
}