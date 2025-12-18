#include <iostream>
#include "Medic.h"
#include "Device.h"

using namespace std;

void printMenu()
{
    cout << "1. Add Medic" << endl;
    cout << "2. Add Device" << endl;
    cout << "Choice: ";
}

int main()
{
    Product* inventory[5];

    for (int i = 0; i < 5; i++)
    {
        int choice;

        cout << "\n--- Object " << (i + 1) << " ---\n";
        printMenu();
        cin >> choice;

        string n, m, s, t;
        double p;
        int e, w;

        cout << "Enter Name: "; cin >> n;
        cout << "Enter Manufacturer: "; cin >> m;
        cout << "Enter Price: "; cin >> p;

        if (choice == 1)
        {
            cout << "Enter Specialization: "; cin >> s;
            cout << "Enter Experience: "; cin >> e;
            inventory[i] = new Medic(n, m, p, s, e);
        }
        else
        {
            cout << "Enter Type: "; cin >> t;
            cout << "Enter Warranty (months): "; cin >> w;
            inventory[i] = new Device(n, m, p, t, w);
        }
    }

    cout << "\n--- List of Objects ---\n";
    for (int i = 0; i < 5; i++)
    {
        inventory[i]->showInfo();
    }

    for (int i = 0; i < 5; i++)
    {
        delete inventory[i];
    }

    return 0;
}