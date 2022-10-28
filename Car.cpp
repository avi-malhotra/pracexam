#include<iostream>
#include<string>
#include "Car.h"

using namespace std;


Car::Car(){
    price=0;
    VinNumber=0;
    emissions=0;
}
void Car::set_price(int p){
    price=p;
}
void Car::set_VinNumber(int v){
    VinNumber=v;
}
void Car::set_emissions(int e){
    emissions=e;
}
int Car::get_price(){
    return price;
}
int Car::get_VinNumber(){
    return VinNumber;
}
int Car::get_emissions(){
    return emissions;
}
