#ifndef CAR_H_
#define CAR_H_

#include<iostream>
#include<string>

using namespace std;

class Car{
    protected:
    int price;
    int VinNumber;
    int emission;
    public:
    Car();
    void set_price(int);
    void set_VinNumber(int);
    void set_emission(int);
    int get_price();
    int get_VinNumber();
    int get_emission();
    virtual void drive(int kms)=0;
};
#endif