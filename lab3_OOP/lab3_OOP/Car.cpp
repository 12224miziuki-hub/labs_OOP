#include "Car.h"
#include <stdexcept>

Car::Car(string b, string c, int p, double v) {
    setPower(p);
    setVolume(v);
    brand = b;
    color = c;
}

void Car::setPower(int p) {
    if (p < 0) throw invalid_argument("��������� �� ���� ���� �䒺����!");
    power = p;
}

void Car::setVolume(double v) {
    if (v <= 0) throw invalid_argument("�ᒺ� ������� �� ���� ��������!");
    volume = v;
}

void Car::setBrand(string b) { brand = b; }
void Car::setColor(string c) { color = c; }

int Car::getPower() const { return power; }
double Car::getVolume() const { return volume; }
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }

Car& Car::operator+=(int extraPower) {
    if (extraPower < 0) throw invalid_argument("����������� ��������� �� ���� ���� �䒺����!");
    power += extraPower;
    return *this;
}

template <typename T>
void safeInput(istream& in, const string& prompt, T& value) {
    cout << prompt;
    while (!(in >> value)) {
        in.clear();
        in.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "�������! ������ ��������� �����: ";
    }
}


istream& operator>>(istream& in, Car& car) {
    cout << "������ �����: ";
    in >> car.brand;
    cout << "������ ����: ";
    in >> car.color;
    safeInput(in, "������ ��������� (�.�.): ", car.power);
    if (car.power < 0)
        throw invalid_argument("��������� �� ���� ���� �䒺����!");

    safeInput(in, "������ �ᒺ� ������� (�): ", car.volume);
    if (car.volume <= 0)
        throw invalid_argument("�ᒺ� ������� �� ���� ��������!");
    return in;
}

ostream& operator<<(ostream& out, const Car& car) {
    out << "�����: " << car.brand
        << ", ����: " << car.color
        << ", ���������: " << car.power << " �.�."
        << ", �ᒺ�: " << car.volume << " �";
    return out;
}

bool Car::search(const string& b) const { return brand == b; }
bool Car::search(int p) const { return power == p; }
bool Car::search(double v) const { return volume == v; }
