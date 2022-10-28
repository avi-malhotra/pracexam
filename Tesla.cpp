#include <iostream>
#include <string>
using namespace std;

#include "Tesla.h"

Tesla::Tesla()
{
}
char Tesla::get_model()
{
    return model;
}
void Tesla::set_model(char m)
{
    model = m;
}
float Tesla::get_batteryPercentage()
{
    return batteryPercentage;
}
void Tesla::set_batteryPercentage(float b)
{
    batteryPercentage = b;
}
Tesla::Tesla(char model, int price)
{
    model = model;
    price = price;
}
void Tesla::chargeBattery(int mins)
{
    if (batteryPercentage + (int)(mins * 0.5) > 100)
        batteryPercentage = 100;
    else
    {
        batteryPercentage = batteryPercentage + (int)(mins * 0.5);
    }
}