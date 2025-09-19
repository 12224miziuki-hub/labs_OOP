#include "Car.h"

Car::Car() : brand("N/A"), color("N/A"), regNum("N/A"), engine() {}

Car::Car(string b, string c, string r, double v, int p, string s)
    : brand(b), color(c), regNum(r), engine(v, p, s) {}

Car::Car(string b, string c) : brand(b), color(c), regNum("N/A"), engine() {}

Car::~Car() {
    cout << "Автомобіль " << brand << " з держ. номером " << regNum << " видалено." << endl;
}

void Car::setBrand(string b) { brand = b; }
void Car::setColor(string c) { color = c; }
void Car::setRegNum(string r) { regNum = r; }

string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
string Car::getRegNum() const { return regNum; }

Engine& Car::getEngine() { return engine; }

void Car::changeColor(string newColor) { color = newColor; }
void Car::changeRegNum(string newRegNum) { regNum = newRegNum; }

void Car::print() const {
    cout << "Автомобіль: " << brand
        << ", колір = " << color
        << ", держ. номер = " << regNum << endl;
    engine.print();
}
