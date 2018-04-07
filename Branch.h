#include "City.h"
#include <iostream>
#include <string>

class Branch {
    int longitude, latitude, cars;
    City *city;
public:
    Branch(City *city);
    void setPosition(int, int, std::string);
    int getLongitude() {return longitude;}
};

void Branch::setPosition (int x, int y, std::string S) {
    longitude = x;
    latitude = y;
    this->city->city[x][y] = S;
}
Branch::Branch(City *city) {
    this->city = city;
}