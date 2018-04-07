#include "City.h"
#include <iostream>

class Branch {
    int longitude, latitude, cars, *city;
public:
    void setPosition(int, int);
    int getLongitude() {return longitude;}
};

void Branch::setPosition (int x, int y) {
    City city;
    std::cout << "Creating Branch...";    
    city.getCity();
    longitude = x;
    latitude = y;
}