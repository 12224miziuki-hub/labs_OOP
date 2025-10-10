#include <iostream>
#include <Windows.h>
#include "Car.h"
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        Car car1("Toyota", "Червоний", 150, 2);
        cout << car1 << endl << endl;

        car1 += 20;
        cout << "Після тюнінгу: " << car1 << endl << endl;

        Car car2;
        cin >> car2;
        cout << "Ви ввели: " << car2 << endl << endl;
        if (car2.search("BMW")) cout << "Це BMW!" << endl;
        if (car2.search("Синій")) cout << "Авто синього кольору!" << endl;

    }
    catch (const exception& e) {
        cerr << "Помилка: " << e.what() << endl;
    }

    return 0;
}
