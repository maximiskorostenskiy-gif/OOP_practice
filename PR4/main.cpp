#include <iostream>
#include "Vector.h"
#include "Medic.h"
#include "Device.h"

using namespace std;

int main()
{
    cout << " Check Vector<int> " << endl;
    Vector<int> vInt;
    vInt.push_back(10);
    vInt.push_back(20);
    vInt.push_back(30);

    for (int i = 0; i < vInt.getSize(); i++)
    {
        cout << vInt[i] << " ";
    }
    cout << endl;

    cout << "\n Check Vector<double> " << endl;
    Vector<double> vDouble;
    vDouble.push_back(1.5);
    vDouble.push_back(2.7);
    vDouble.push_back(3.9);

    for (int i = 0; i < vDouble.getSize(); i++)
    {
        cout << vDouble.at(i) << " ";
    }
    cout << endl;

    cout << "\n Check Vector<Product*> " << endl;
    Vector<Product*> inventory;

    inventory.push_back(new Medic("Dr. House", "Hospital", 5000, "Diagnostician", 20));
    inventory.push_back(new Medic("Dr. Watson", "London", 3000, "Assistant", 5));
    inventory.push_back(new Device("MRI", "Siemens", 150000, "Scanner", 24));
    inventory.push_back(new Device("X-Ray", "Philips", 80000, "Imaging", 12));

    for (int i = 0; i < inventory.getSize(); i++)
    {
        inventory[i]->showInfo();
    }

    for (int i = 0; i < inventory.getSize(); i++)
    {
        delete inventory[i];
    }

    return 0;
}