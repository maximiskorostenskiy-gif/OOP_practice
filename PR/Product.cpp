#include "Product.h"


Product::Product() : id(0), name("Unknown"), manufacturer("Unknown"), price(0.0), shelfLife(0), quantity(0), composition("-"), calories(0.0) {}


Product::Product(int id, string name, string manufacturer, double price, int shelfLife, int quantity, string composition, double calories)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), quantity(quantity), composition(composition), calories(calories) {
}


istream& operator>>(istream& is, Product& p) {
    cout << "Enter ID: "; is >> p.id;
    cout << "Enter Name: "; is >> p.name;
    cout << "Enter Manufacturer: "; is >> p.manufacturer;
    cout << "Enter Price: "; is >> p.price;
    cout << "Enter Shelf Life (days): "; is >> p.shelfLife;
    cout << "Enter Quantity: "; is >> p.quantity;
    cout << "Enter Composition: "; is >> p.composition;
    cout << "Enter Calories: "; is >> p.calories;
    return is;
}


ostream& operator<<(ostream& os, const Product& p) {
    os << "Product [ID: " << p.id
        << ", Name: " << p.name
        << ", Manuf: " << p.manufacturer
        << ", Price: " << p.price
        << ", Life: " << p.shelfLife
        << ", Qty: " << p.quantity
        << ", Comp: " << p.composition
        << ", Cal: " << p.calories << "]";
    return os;
}


bool Product::operator==(const Product& other) const {
    return id == other.id &&
        name == other.name &&
        manufacturer == other.manufacturer &&
        price == other.price &&
        shelfLife == other.shelfLife &&
        quantity == other.quantity &&
        composition == other.composition &&
        calories == other.calories;
}