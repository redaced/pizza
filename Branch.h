#include "City.h"
#include <iostream>

class Branch {
    Branch(City *city);
    int longitude, latitude, cars;
    City *city;
public:
    void setPosition(int, int);
    int getLongitude() {return longitude;}
};

void Branch::setPosition (int x, int y) {
    longitude = x;
    latitude = y;
}
Branch::Branch(City *city) {
    this->city = city;
}