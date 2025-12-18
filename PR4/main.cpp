#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
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

    void showProduct()
    {
        cout << "Name: " << name << ", Manuf: " << manufacturer << ", Price: " << price << endl;
    }
};

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

    Medic(string specialization, int experience, string name, string manufacturer, double price) : Product(name, manufacturer, price)
    {
        this->specialization = specialization;
        this->experience = experience;
    }

    void showMedic()
    {
        showProduct();
        cout << "Specialization: " << specialization << ", Experience: " << experience << endl;
    }
};

int main()
{
    Medic myMedic("Surgeon", 10, "Dr. House", "Princeton", 5000.0);
    myMedic.showMedic();

    return 0;
}