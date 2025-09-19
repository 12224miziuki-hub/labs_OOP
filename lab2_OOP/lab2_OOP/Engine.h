#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <string>
using namespace std;

class Engine {
private:
    double volume;     
    int power;         
    string serialNum;  

public:

    Engine();

    Engine(double v, int p, string s);

    void setVolume(double v);
    void setPower(int p);
    void setSerialNum(string s);

    double getVolume() const;
    int getPower() const;
    string getSerialNum() const;

    void print() const;
};

#endif
