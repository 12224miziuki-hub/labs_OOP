#include "Car.h"
#include <stdexcept>

Car::Car(string b, string c, int p, double v) {
    setPower(p);
    setVolume(v);
    brand = b;
    color = c;
}

void Car::setPower(int p) {
    if (p < 0) throw invalid_argument("Потужність не може бути від’ємною!");
    power = p;
}

void Car::setVolume(double v) {
    if (v <= 0) throw invalid_argument("Об’єм двигуна має бути додатним!");
    volume = v;
}

void Car::setBrand(string b) { brand = b; }
void Car::setColor(string c) { color = c; }

int Car::getPower() const { return power; }
double Car::getVolume() const { return volume; }
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }

Car& Car::operator+=(int extraPower) {
    if (extraPower < 0) throw invalid_argument("Нарощування потужності не може бути від’ємним!");
    power += extraPower;
    return *this;
}

template <typename T>
void safeInput(istream& in, const string& prompt, T& value) {
    cout << prompt;
    while (!(in >> value)) {
        in.clear();
        in.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Помилка! Введіть правильне число: ";
    }
}


istream& operator>>(istream& in, Car& car) {
    cout << "Введіть марку: ";
    in >> car.brand;
    cout << "Введіть колір: ";
    in >> car.color;
    safeInput(in, "Введіть потужність (к.с.): ", car.power);
    if (car.power < 0)
        throw invalid_argument("Потужність не може бути від’ємною!");

    safeInput(in, "Введіть об’єм двигуна (л): ", car.volume);
    if (car.volume <= 0)
        throw invalid_argument("Об’єм двигуна має бути додатним!");
    return in;
}

ostream& operator<<(ostream& out, const Car& car) {
    out << "Марка: " << car.brand
        << ", Колір: " << car.color
        << ", Потужність: " << car.power << " к.с."
        << ", Об’єм: " << car.volume << " л";
    return out;
}

bool Car::search(const string& b) const { return brand == b; }
bool Car::search(int p) const { return power == p; }
bool Car::search(double v) const { return volume == v; }
