// Lab_04_5.cpp
// Клак Соломія
// Лабораторна робота № 4.5
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    double R1, R2, x, y;

    cout << "R1 = "; cin >> R1;   // радіус зовнішнього кола
    cout << "R2 = "; cin >> R2;   // радіус внутрішнього кола

    srand((unsigned)time(NULL));

    // 1 спосіб: координати вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        // кільце між колами радіусів R2 та R1 у I і III чвертях
        if (x * x + y * y >= R2 * R2 && x * x + y * y <= R1 * R1 && x * y >= 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: координати визначаються випадково з [-R1; R1]
    for (int i = 0; i < 10; i++)
    {
        x = 2. * R1 * rand() / RAND_MAX - R1;
        y = 2. * R1 * rand() / RAND_MAX - R1;

        if (x * x + y * y >= R2 * R2 && x * x + y * y <= R1 * R1 && x * y >= 0)
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    " << "no" << endl;
    }

    return 0;
}
