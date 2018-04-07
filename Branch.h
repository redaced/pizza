#include "City.h"
#include <iostream>

class Branch {
    int longitude, latitude, cars;
    City *city;
public:
    Branch(City *city);
    void setPosition(int, int);
    int getLongitude() {return longitude;}
};

void Branch::setPosition (int x, int y) {
    longitude = x;
    latitude = y;
    this->city[x][y] = "B";
    this->city->printCity();
}
Branch::Branch(City *city) {
    this->city = city;
}