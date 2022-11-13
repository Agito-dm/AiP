#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{ // объявление переменных и очистка экрана
    float a, // параметр
        b, //параметр
        x, // аргумент функции z 
        xn, // начальное значение аргумента x
        xk, // конечное значение аргумента x
        dx, // шаг 
        z; // значение функции z
     // ввод a, xn, xk, dx
    setlocale(LC_ALL, "Rus");
    cout << "Введите параметр a: ", cin >> a;
    cout << "Введите параметр b: ", cin >> b;
   // x = 0;
   // z = 1;
    do
    {
        cout << "Введите xn: ", cin >> xn;
        cout << "Введите xk: ", cin >> xk;
        if (xn > xk)
        {
            cout << "Начальное значение не может быть больше конечного \n" ;
        }
        else break;
    } while (xn > xk);
    cout << "Введите шаг dx: ", cin >> dx;
     // вывод заголовка и шапки таблицы
    cout << "Таблица значений функции z=f(x)" << endl
        << " _________________________" << endl
        << " |    x     |  z = f(x) |" << endl
        << " _________________________" << endl;
    // табулирование функции z
    cout.precision(3), cout.setf(ios::showpoint);
    cout.setf(ios::left, ios::adjustfield);
    cout.setf(ios::fixed, ios::floatfield);
    for (x = xn; x <= xk; x += dx)
    { // вывод строки таблицы
        cout << " | " << setw(9) << x << '|'; // вывод аргумента x
        // вычисление значения функции z
        (x <= a) ? (z = pow(x, 2) + sin(x)) : ((x < b) ? (z = cos(pow(x, 2))) : (z = tan(x)));
        // вывод значения функции z
        cout << " " << setw(10);
        // целочисленное или вещественное z
        (a > 10) ? cout << (int)z : cout << z;
        cout << '|' << endl;
    }
    cout << " _________________________" << endl;
    return 0;
} 
