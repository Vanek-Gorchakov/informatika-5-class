// Zadacha1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    double metr, kulon, volt;
    std::cout << "Введи число в метрах ";
    std::cin >> metr;

    std::cout << "Введи число в куклонах ";
    std::cin >> kulon;

    std::cout << "Введи число в вольтах ";
    std::cin >> volt;

    const double sm = 100;
    const double k = 3 * pow(10, 9);
    const double v = 1. / 300;
    std::cout << "Расстояние в СГСЭ будет: " << metr * sm << "см"<<std::endl;
    std::cout << "Расстояние в СГСЭ будет: " << kulon * k << " СГСЭ-ед. заряда\n";
    std::cout << "Расстояние в СГСЭ будет: " << volt * v << " СГСЭ-ед. напряженности\n";



}

