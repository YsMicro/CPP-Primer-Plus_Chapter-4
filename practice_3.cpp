#include "head.h"
//#include <cstring>
int practice_3()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    cout << "���First Name:";
    cin.getline(first_name, 20);
    cout << "���Last Name:";
    cin.getline(last_name, 20);
    strcpy_s(full_name, last_name);
    strcat_s(full_name, ", ");
    strcat_s(full_name, first_name);
    cout << "�ڵ�һ�ַ�������ʾ��Ϣ" << full_name << endl;

    return 0;
}