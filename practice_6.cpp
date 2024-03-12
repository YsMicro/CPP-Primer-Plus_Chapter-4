#include "head.h"

int practice_6()
{
    struct CandyBar
    {
        string brand;
        double weight;
        int calorie;
    };

    CandyBar candy[3] = {
        {"can01", 1.2, 350},
        {"can02", 2.3, 450},
        {"can03", 3.4, 550}
    };

    cout << candy[0].brand << endl;
    cout << candy[0].weight << endl;
    cout << candy[0].calorie << endl;
    cout << endl;
    cout << candy[1].brand << endl;
    cout << candy[1].weight << endl;
    cout << candy[1].calorie << endl;
    cout << endl;
    cout << candy[2].brand << endl;
    cout << candy[2].weight << endl;
    cout << candy[2].calorie << endl;
    cout << endl;
    return 0;
}