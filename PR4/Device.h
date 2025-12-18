#ifndef DEVICE_H
#define DEVICE_H

#include "Product.h"

class Device : public Product
{
private:
    string type;
    int warranty;

public:
    Device() : Product()
    {
        this->type = "";
        this->warranty = 0;
    }

    Device(string name, string manufacturer, double price, string type, int warranty)
        : Product(name, manufacturer, price)
    {
        this->type = type;
        this->warranty = warranty;
    }

    void showInfo() override
    {
        cout << "[Device] Name: " << name
            << ", Manuf: " << manufacturer
            << ", Price: " << price
            << ", Type: " << type
            << ", Warranty: " << warranty << " months" << endl;
    }
};

#endif