#pragma once
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <Windows.h>
#include <string>
#include "Engine.h"
using namespace std;

class Car {
private:
    string brand;      
    string color;     
    string regNum;     
    Engine engine;    

public:
    Car();

    Car(string b, string c, string r, double v, int p, string s);

    Car(string b, string c);

    // Деструктор
    ~Car();

    void setBrand(string b);
    void setColor(string c);
    void setRegNum(string r);

    string getBrand() const;
    string getColor() const;
    string getRegNum() const;

    Engine& getEngine();

    void changeColor(string newColor);
    void changeRegNum(string newRegNum);

    void print() const;
};

#endif
