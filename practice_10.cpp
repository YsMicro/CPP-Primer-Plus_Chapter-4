#include "head.h"
#include <array>

int practice_10()
{
    array<double, 3> result;
    cout << "输入三次成绩：";
    cin >> result[0];
    cin >> result[1];
    cin >> result[2];
    double(avg_result) = (result[0] + result[1] + result[2]) / 3;
    cout << "三次分别是：" << result[0] << ", "
        << result[1] << ", " << result[2] << endl;
    cout << "平均成绩：" << avg_result << endl;
    return 0;
}