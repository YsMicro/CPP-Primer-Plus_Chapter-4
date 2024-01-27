#include "head.h"
#include <vector>
#include <array>

int choices()
{
    using namespace std;
    //原始C++
    double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
    //C++98标准
    vector<double> a2(4);
    //C98中没有简单的方式进行初始化
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;
    //C++ 11 创建并初始化 array 对象
    array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
    array<double, 4> a4;
    a4 = a3;
    //使用数组表示法
    cout << "a1[2]:" << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]:" << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]:" << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]:" << a4[2] << " at " << &a4[2] << endl;
    //违规行为
    a1[-2] = 20.2;
    cout << "a1[-2]:" << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]:" << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]:" << a4[2] << " at " << &a4[2] << endl;
    return 0;
}