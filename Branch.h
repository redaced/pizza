#pragma once

#include "City.h"
#include <iostream>

class Branch {
    int longitude, latitude, cars;
public:
    void setPosition(int, int);
    int getLongitude() {return longitude;}
};

void Branch::setPosition (int x, int y) {
    // City city;
    // city.createCity(3,3);
    // city.getCity();
    longitude = x;
    latitude = y;
}