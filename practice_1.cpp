#include "head.h"

int main_practice1()
{
    char fName[40];
    char lName[40];
    char grade;
    int age;
    cout << "你的First name?";
    cin.getline(fName, 40);
    cout << "你的Last name?";
    cin.getline(lName, 40);
    cout << "你期望的等级?";
    cin >> grade;
    cout << "你的年龄?";
    cin >> age;
    cout << "Name: " << lName << ", " << fName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}