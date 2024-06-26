﻿#include <iostream>
using namespace std;

class Дробь
{
private:
    int числитель;
    int знаменатель;

public:
    Дробь(int num = 0, int den = 1) : числитель(num), знаменатель(den)
    {}

    // Функция для ввода данных
    void ввод()
    {
        cout << "Введите числитель: ";
        cin >> числитель;

        cout << "Введите знаменатель: ";
        cin >> знаменатель;

        if (знаменатель == 0)
        {
            cerr << "Ошибка: знаменатель не может быть равен нулю." << endl;
            exit(1);
        }
    }

    // Функция для сложения дробей
    Дробь сложение(const Дробь& другая)
    {
        int новый_числитель = числитель * другая.знаменатель + другая.числитель * знаменатель;
        int новый_знаменатель = знаменатель * другая.знаменатель;
        return Дробь(новый_числитель, новый_знаменатель);
    }

    // Функция для вычитания дробей
    Дробь вычитание(const Дробь& другая)
    {
        int новый_числитель = числитель * другая.знаменатель - другая.числитель * знаменатель;
        int новый_знаменатель = знаменатель * другая.знаменатель;
        return Дробь(новый_числитель, новый_знаменатель);
    }

    // Функция для умножения дробей
    Дробь умножение(const Дробь& другая)
    {
        int новый_числитель = числитель * другая.числитель;
        int новый_знаменатель = знаменатель * другая.знаменатель;
        return Дробь(новый_числитель, новый_знаменатель);
    }

    // Функция для деления дробей
    Дробь деление(const Дробь& другая)
    {
        int новый_числитель = числитель * другая.знаменатель;
        int новый_знаменатель = знаменатель * другая.числитель;
        return Дробь(новый_числитель, новый_знаменатель);
    }

    // Функция для вывода дроби
    void вывод()
    {
        cout << числитель << "/" << знаменатель << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Дробь дробь1, дробь2;

    cout << "Введите данные для первой дроби:\n";
    дробь1.ввод();

    cout << "Введите данные для второй дроби:\n";
    дробь2.ввод();

    Дробь сумма = дробь1.сложение(дробь2);
    cout << "Сумма дробей: ";
    сумма.вывод();

    Дробь разность = дробь1.вычитание(дробь2);
    cout << "Разность дробей: ";
    разность.вывод();

    Дробь произведение = дробь1.умножение(дробь2);
    cout << "Произведение дробей: ";
    произведение.вывод();

    Дробь частное = дробь1.деление(дробь2);
    cout << "Частное дробей: ";
    частное.вывод();

    return 0;
}
