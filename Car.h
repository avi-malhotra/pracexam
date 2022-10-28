#ifndef CAR_H_
#define CAR_H_

#include<iostream>
#include<string>

using namespace std;

class Car{
    protected:
    int price;
    int vinNumber;
    int emissions;
    public:
    Car();
    Car(int price);
    void set_price(int p);
    void set_vinNumber(int v);
    void set_emissions(int e);
    int get_price();
    int get_vinNumber();
    int get_emissions();
    virtual void drive(int kms)=0;
};
#endif