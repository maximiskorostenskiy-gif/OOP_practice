#ifndef MEDIC_H
#define MEDIC_H

#include "Product.h"

class Medic : public Product
{
private:
    string specialization;
    int experience;

public:
    Medic() : Product()
    {
        this->specialization = "";
        this->experience = 0;
    }

    Medic(string name, string manufacturer, double price, string specialization, int experience)
        : Product(name, manufacturer, price)
    {
        this->specialization = specialization;
        this->experience = experience;
    }

    void showInfo() override
    {
        cout << "[Medic] Name: " << name
            << ", Manuf: " << manufacturer
            << ", Price: " << price
            << ", Spec: " << specialization
            << ", Exp: " << experience << " years" << endl;
    }
};

#endif