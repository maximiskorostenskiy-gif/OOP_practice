#include <iostream>
#include "Product.h"

using namespace std;

int main() {
    
    Product object1, object2, object3;


    cout << "Enter details for 3 products" << endl;
    cin >> object1 >> object2 >> object3;

    
    cout << "\nProduct List" << endl;
    cout << object1 << endl << object2 << endl << object3 << endl;
   
    cout << "\n Comparison Test" << endl;
    if (object1 == object2) {
        cout << "Object 1 is equal to Object 2" << endl;
    }
    else {
        cout << "Object 1 is NOT equal to Object 2" << endl;
    }

    return 0;
}