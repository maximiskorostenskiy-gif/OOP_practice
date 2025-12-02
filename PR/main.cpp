#include <iostream>
#include "Product.h"

int main() {
    std::cout << "Lab" << std::endl; // «м≥нили текст
    Product milk(1, "Milk", "Farm", 30.0, 5, 100, "Milk", 50);
    milk.printInfo();
    return 0;
}