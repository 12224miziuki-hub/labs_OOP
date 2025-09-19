// lab2_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Car.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car1;
    car1.print();
    cout << endl;

    Car car2("Toyota", "Червоний", "AA1234BB", 2.0, 150, "ENG12345");
    car2.print();
    cout << endl;

    car2.changeColor("Чорний");
    car2.changeRegNum("BC5678CD");
    car2.print();
    cout << endl;
 
    Car car3("BMW", "Синій");
    car3.print();

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
