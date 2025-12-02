#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>

class Product {
private:
    int id;
    std::string name;
    std::string manufacturer;
    double price;
    int shelfLife;
    int quantity;
    std::string composition;
    double calories;

public:
    Product(); 
    Product(int id, std::string name, std::string manufacturer, double price,
        int shelfLife, int quantity, std::string composition, double calories);
    Product(const Product& other); 
    ~Product(); 
    void printInfo() const;
};
#endif