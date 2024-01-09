#include "head.h"

int init_ptr()
{
    int higgens = 5;
    int* pt = &higgens;

    cout << "Values of higgens = " << higgens
        << " ; Address of higgens " << &higgens << endl;
    cout << "Address: *pt = " << *pt
        << " ; Value of pt = " << pt << endl;
    return 0;
}