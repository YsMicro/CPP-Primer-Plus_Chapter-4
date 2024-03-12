#include "head.h"
#include <string>

int practice_7()
{
    struct Pizza
    {
        string company;
        double diameter;
        double weight;
    };
    Pizza pizza;
    cout << "company:";
    getline(cin, pizza.company);
    cout << "diameter:";
    cin >> pizza.diameter;
    cout << "weight:";
    cin >> pizza.weight;
    cout << pizza.company << endl;
    cout << pizza.diameter << endl;
    cout << pizza.weight << endl;
    return 0;
}