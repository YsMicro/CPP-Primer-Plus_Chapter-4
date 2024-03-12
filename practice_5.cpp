#include "head.h"

int practice_5()
{
    struct CandyBar
    {
        string brand;
        double weight;
        int calorie;
    };

    CandyBar snack
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calorie << endl;

    return 0;
}