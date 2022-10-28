#include<iostream>
#include<string>
using namespace std;

#include "Car.h"

Car::Car(){
    price=0;
    vinNumber=0;
    emissions=0;
}
Car::Car(int p){
   price=p;
}
void Car::set_price(int p){
    price=p;
}
void Car::set_vinNumber(int v){
    vinNumber=v;
}
void Car::set_emissions(int e){
    emissions=e;
}
int Car::get_price(){
    return price;
}
int Car::get_vinNumber(){
    return vinNumber;
}
int Car::get_emissions(){
    return emissions;
};


