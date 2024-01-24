#include "head.h"

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int struct_main()
{
    inflatable* ps = new inflatable;
    cout << "输入 inflatable 项目的名字：";
    cin.get(ps->name, 20);
    cout << "输入体积（立方英尺）：";
    cin >> (*ps).volume;
    cout << "输入价格：$";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " 立方英尺\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;
}
