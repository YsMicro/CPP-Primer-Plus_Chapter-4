#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <cstring>

int ptrstr()
{
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps = {0};

    cout << animal << " and ";
    cout << bird << "\n";
    //cout << ps << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;
    //cin >> ps;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)ps << endl;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)ps << endl;
    delete[] ps;
    return 0;
}
