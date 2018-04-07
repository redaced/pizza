#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "Branch.h"
#include "City.h"

using namespace std;

int main() {
    City *city;
    City c;
    city = & c;
    city->createCity(10,10);
    // city->printCity();
    Branch branch(city);
    branch.setPosition(3,4);
    // cout << "area: " << branch.getLongitude();
    return 0;
}