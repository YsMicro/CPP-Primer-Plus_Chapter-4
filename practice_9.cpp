#include "head.h"

int practice_9()
{
    struct CandyBar
    {
        string brand;
        double weight;
        int calorie;
    };

    CandyBar* p_candy = new CandyBar[3]{
        {"can01", 1.2, 120},
        {"can02", 2.3, 230},
        {"can03", 3.4, 340},
    };
    cout << p_candy[0].brand << endl;
    cout << p_candy[0].weight << endl;
    cout << p_candy[0].calorie << endl;
    cout << endl;
    cout << p_candy[1].brand << endl;
    cout << p_candy[1].weight << endl;
    cout << p_candy[1].calorie << endl;
    cout << endl;
    cout << p_candy[2].brand << endl;
    cout << p_candy[2].weight << endl;
    cout << p_candy[2].calorie << endl;
    cout << endl;
    return 0;
}