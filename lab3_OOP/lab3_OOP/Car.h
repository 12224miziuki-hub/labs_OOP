#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;    
    string color;     
    int power;      
    double volume;    

public:
    Car(string b = "N/A", string c = "N/A", int p = 0, double v = 0.1);

    void setPower(int p);
    void setVolume(double v);
    void setBrand(string b);
    void setColor(string c);

    int getPower() const;
    double getVolume() const;
    string getBrand() const;
    string getColor() const;

    Car& operator+=(int extraPower);

    friend istream& operator>>(istream& in, Car& car);
    friend ostream& operator<<(ostream& out, const Car& car);

    bool search(const string& b) const;
    bool search(int p) const;
    bool search(double v) const;
};
