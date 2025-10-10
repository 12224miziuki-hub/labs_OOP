#include <iostream>
#include <Windows.h>
#include "Car.h"
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        Car car1("Toyota", "��������", 150, 2);
        cout << car1 << endl << endl;

        car1 += 20;
        cout << "ϳ��� ������: " << car1 << endl << endl;

        Car car2;
        cin >> car2;
        cout << "�� �����: " << car2 << endl << endl;
        if (car2.search("BMW")) cout << "�� BMW!" << endl;
        if (car2.search("����")) cout << "���� ������� �������!" << endl;

    }
    catch (const exception& e) {
        cerr << "�������: " << e.what() << endl;
    }

    return 0;
}
