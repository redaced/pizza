#include "City.h"
#include <iostream>
#include <string>

class Order {
    int longitude, latitude, price, branch;
    City *city;
public:
    Order(City *city);
    void setPosition(int, int, int, std::string);
    void setBranch(int);
    int getLongitude() {return longitude;}
};

void Order::setPosition (int x, int y, int p, std::string S) {
    longitude = x;
    latitude = y;
    price = p;
    this->city->city[x][y] = S;
}
void Order::setBranch(int b){
    branch = b;
}
Order::Order(City *city) {
    this->city = city;
}