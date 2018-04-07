#pragma once

#include <iostream>
#include <string>

class City {
    static std::string city[100][100];
    int x, y;
public:
    void createCity (int, int);
    void printCity(){
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                std::cout << city[i][j];
            }
            std::cout << std::endl;
        }
    }
    std::string getCity();
};

void City::createCity (int width, int height) {
    x = width;
    y = height;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            city[i][j] = "O";
        }
    }
}

std::string City::getCity(){
    return "f";
}