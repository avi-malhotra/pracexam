#ifndef CAR_H_
#define CAR_H_

#include<iostream>
#include<string>

using namespace std;

class Car{
    protected:
    int price;
    int vinNumber;
    int emissions=0;
    public:
    Car();
    void set_price(int);
    void set_vinNumber(int);
    void set_emissions(int);
    int get_price();
    int get_vinNumber();
    int get_emissions();
    virtual void drive(int kms)=0;
};
#endif