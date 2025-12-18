#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Medic.h"
#include "Device.h"

using namespace std;

bool isMedic(Product* p)
{
    return dynamic_cast<Medic*>(p) != nullptr;
}

bool isDevice(Product* p)
{
    return dynamic_cast<Device*>(p) != nullptr;
}

void printMenu()
{
    cout << "1. Add Medic" << endl;
    cout << "2. Add Device" << endl;
    cout << "0. Exit filling" << endl;
    cout << "Choice: ";
}

int main()
{
    srand(time(0));

    cout << " PART 1: Vectors and Algorithms " << endl;

    vector<int> v1(10);
    for (int i = 0; i < 10; i++)
    {
        int num = rand() % 100;
        if (num % 2 == 0) num++;
        v1[i] = num;
    }

    vector<int> v2(10);
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    {
        int num = rand() % 100;
        if (num % 2 != 0) num++;
        *it = num;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> v3(20);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    cout << "Vector 1 (Odd): ";
    for (size_t i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << endl;

    cout << "Vector 2 (Even): ";
    for (size_t i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    cout << endl;

    cout << "Vector 3 (Merged): ";
    for (size_t i = 0; i < v3.size(); i++) cout << v3[i] << " ";
    cout << endl << endl;


    cout << " PART 2: Objects " << endl;

    vector<Product*> storage1;

    while (true)
    {
        int choice;
        printMenu();
        cin >> choice;

        if (choice == 0) break;

        string n, m, s, t;
        double p;
        int e, w;

        if (choice == 1)
        {
            cout << "Enter Name, Manuf, Price, Spec, Exp: ";
            cin >> n >> m >> p >> s >> e;
            storage1.push_back(new Medic(n, m, p, s, e));
        }
        else if (choice == 2)
        {
            cout << "Enter Name, Manuf, Price, Type, Warranty: ";
            cin >> n >> m >> p >> t >> w;
            storage1.push_back(new Device(n, m, p, t, w));
        }
    }

    vector<Product*> storage2 = storage1;

 
    auto newEnd1 = remove_if(storage1.begin(), storage1.end(), isMedic);
    storage1.erase(newEnd1, storage1.end());

    
    auto newEnd2 = remove_if(storage2.begin(), storage2.end(), isDevice);
    storage2.erase(newEnd2, storage2.end());

    cout << "\n Storage 1 (No Medics) " << endl;
    for (size_t i = 0; i < storage1.size(); i++) storage1[i]->showInfo();

    cout << "\n Storage 2 (No Devices) " << endl;
    for (size_t i = 0; i < storage2.size(); i++) storage2[i]->showInfo();

    return 0;
}