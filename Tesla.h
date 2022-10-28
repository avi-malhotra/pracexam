#ifndef TESLA_H_
#define TESLA_H_

#include<iostream>
#include<string>

#include "Car.h"

using namespace std;

class Tesla: public Car{
    private:
    static int nextVinNumber;
    char model;
    float batteryPercentage=100;
    public:
    Tesla();
    void get_model();
    void set_model(char m);
    void get_batteryPercentage();
    void set_batteryPercentage(float b);
    Tesla(char model, int price);
    void chargeBattery(int mins);
};
#endif