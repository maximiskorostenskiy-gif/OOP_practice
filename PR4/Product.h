#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product
{
protected:
    string name;
    string manufacturer;
    double price;

public:
    Product()
    {
        this->name = "";
        this->manufacturer = "";
        this->price = 0.0;
    }

    Product(string name, string manufacturer, double price)
    {
        this->name = name;
        this->manufacturer = manufacturer;
        this->price = price;
    }

    virtual ~Product() {}

    virtual void showInfo() = 0;
};

#endif