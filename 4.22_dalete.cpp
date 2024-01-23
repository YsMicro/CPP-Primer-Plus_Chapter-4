#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <cstring>

char* getname(void);

int delete_main()
{
    char* name;

    name = getname();
    cout << name << " at " << (int*)name << "\n";
    delete[] name;

    name = getname();
    cout << name << " at " << (int*)name << "\n";
    delete[] name;
    return 0;
}

char* getname()
{
    char temp[80];
    cout << "ÊäÈëÐÕÃû£º";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}
