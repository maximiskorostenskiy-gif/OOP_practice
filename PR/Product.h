#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int id;
    string name;           
    string manufacturer;   
    double price;          
    int shelfLife;         
    int quantity;        
    string composition;    
    double calories;       

public:
    Product();
    Product(int id, string name, string manufacturer, double price, int shelfLife, int quantity, string composition, double calories);

  
    friend istream& operator>>(istream& is, Product& p);

    
    friend ostream& operator<<(ostream& os, const Product& p);

    
    bool operator==(const Product& other) const;
};