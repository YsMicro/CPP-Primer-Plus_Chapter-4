#include "head.h"
#include <string>

int practice_8()
{
    struct Pizza
    {
        string company;
        double diameter;
        double weight;
    };

    Pizza* pizza = new Pizza;
    cout << "diameter:";
    cin >> pizza->diameter;
    cout << "company:";
    cin.get();
    getline(cin, pizza->company);
    cout << "weight";
    cin >> pizza->weight;
    cout << pizza->company << endl;
    cout << pizza->diameter << endl;
    cout << pizza->weight << endl;
    delete pizza;
    return 0;
}