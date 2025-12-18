#ifndef MEDIC_H
#define MEDIC_H

#include <iostream>
#include <string>

using namespace std;

class Medic {
private:
    string surname;         
    string specialization;  
    int experience;         

public:
   
    Medic();

  
    Medic(string s, string spec, int exp);


    void printInfo() const;

   
    ~Medic();
};

#endif