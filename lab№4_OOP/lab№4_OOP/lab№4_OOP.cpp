#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class Figure {
public:
    virtual double volume() = 0;
    virtual double surfaceArea() = 0;
    virtual void printInfo(ofstream& fout) = 0;
};

class Cube : public Figure {
protected:
    double side;
public:
    Cube(double s) {
        side = s;
    }

    double volume() override {
        return side * side * side;
    }

    double surfaceArea() override {
        return 6 * side * side;
    }

    void printInfo(ofstream& fout) override {
        fout << "КУБ" << endl;
        fout << "Довжина ребра: " << side << endl;
        fout << "Об'єм: " << volume() << endl;
        fout << "Площа поверхні: " << surfaceArea() << endl << endl;
    }

    double getSide() { return side; }
};

class Sphere : public Figure, public Cube {
public:
    Sphere(double s) : Cube(s) {}

    double radius() {
        return side / 2.0; 
    }

    double volume() override {
        double r = radius();
        return (4.0 / 3.0) * M_PI * r * r * r;
    }

    double surfaceArea() override {
        double r = radius();
        return 4 * M_PI * r * r;
    }

    void printInfo(ofstream& fout) override {
        fout << "СФЕРА (вписана у куб)" << endl;
        fout << "Радіус: " << radius() << endl;
        fout << "Об'єм: " << volume() << endl;
        fout << "Площа поверхні: " << surfaceArea() << endl << endl;
    }
};

int main() {
    setlocale(0, "");
    double side;

    cout << "Введіть довжину ребра куба: ";
    cin >> side;

    Cube cube(side);
    Sphere sphere(side);

    ofstream fout("figures.txt");
    if (!fout) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    cube.printInfo(fout);
    sphere.printInfo(fout);

    fout.close();
    cout << "Інформацію записано у файл figures.txt" << endl;

    return 0;
}
