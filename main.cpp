#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "Branch.h"
#include "City.h"
#include "Order.h"

using namespace std;

int main() {
    City *city;
    City c;
    city = & c;
    city->createCity(10,10);
    Branch branch(city);
    branch.setPosition(4,1,"B");
    branch.setPosition(10,10,"B");
    for(int i=1; i<= 10; i++){
        branch.setPosition(3,i,"R");        
        branch.setPosition(i,8,"R");
    }
    branch.setPosition(1,10,"A");
    branch.setPosition(1,6,"A");
    branch.setPosition(1,7,"A");
    Order order(city);
    order.setPosition(1,10,2000,"D");    
    city->printCity();
    return 0;
}