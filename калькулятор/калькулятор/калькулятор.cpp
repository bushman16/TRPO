﻿// калькулятор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
    double x, y, sum;
    char znak;
begin:
    cout << "Vvedite deystvie(+,-,*,/): ";
    cin >> znak;
    cout << endl;
    cout << "Vvedite pervoe chislo: ";
    cin >> x;
    cout << endl;
    cout << "Vvedite vtoroe chislo: ";
    cin >> y;
    if (znak == '/') {
        while (y == 0) {
            cout << "Na 0 nelzya delit! Vvedite chislo zanovo: ";
            cin >> y;
        }
    }
    cout << endl;
    if (znak == '+') {
        sum = x + y;
        cout << "Otvet: " << sum << endl;
        goto begin;
    }
    else if (znak == '-') {
        sum = x - y;
        cout << "Otvet: " << sum << endl;
        goto begin;
    }
    else if (znak == '*') {
        sum = x * y;
        cout << "Otvet: " << sum << endl;
        goto begin;
    }
    else if (znak == '/') {
        sum = x / y;
        cout << "Otvet: " << sum << endl;
        goto begin;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
