// Lab3.1.cpp
// Огонюк Назар
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double x;
    double y;

    cout << "x = "; cin >> x;

    a = (pow(x, 2) + x + 2) / pow(x, 2);

    if (x < 0)
        b = pow(x, 3) - 2 * pow(x, 4);
    if (x >= 0 && x <= 2)
        b = pow(abs(x) + exp(x), 3);
    if (x > 2)
        b = 4 * cos(pow(x, 2) - 2);

    y = a + b;

    cout << "1) y = " << y << endl;

    if (x < 0)
        b = pow(x, 3) - 2 * pow(x, 4);
    else
        if (x >= 0 && x <= 2)
          b = pow(abs(x) + exp(x), 3);
        else
            b = 4 * cos(pow(x, 2) - 2);

    y = a + b;

    cout << "2) y = " << y << endl;



    system("pause");

    cin.get();
    return 0;
};
