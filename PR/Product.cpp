#include "Product.h"

Product::Product() : id(0), name("Unknown"), price(0.0) {
    std::cout << "Default constructor\n";
}

Product::Product(int id, std::string name, std::string manufacturer, double price,
    int shelfLife, int quantity, std::string composition, double calories)
    : id(id), name(name), manufacturer(manufacturer), price(price),
    shelfLife(shelfLife), quantity(quantity), composition(composition), calories(calories) {
    std::cout << "Parameterized constructor for " << name << "\n";
}

Product::Product(const Product& other)
    : id(other.id), name(other.name), manufacturer(other.manufacturer), price(other.price),
    shelfLife(other.shelfLife), quantity(other.quantity),
    composition(other.composition), calories(other.calories) {
    std::cout << "Copy constructor for " << name << "\n";
}

Product::~Product() {
    std::cout << "Destructor for " << name << "\n";
}

void Product::printInfo() const {
    std::cout << "Product: " << name << ", Price: " << price << " UAH\n";
}