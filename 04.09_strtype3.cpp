#include "head.h"
#include <string>
//#include <cstring>

int strtype3()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    //ΪString������ַ��������
    str1 = str2;
    strcpy_s(charr1, charr2);

    //ΪString������ַ����鸽��
    str1 += " paste";
    strcat_s(charr1, " juice");

    //��ȡ�ַ�����C����ַ����ĳ���
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "�ַ��� " << str1 << " ���� "
        << len1 << " ���ַ���\n";
    cout << "�ַ��� " << charr1 << " ���� "
        << len2 << " ���ַ���\n";
    return 0;
}