#include <stdio.h>
#include <math.h>
#include <locale.h>
// #include <iomanip>
#include <conio.h>

int main()
{ // объявление переменных и очистка экрана
    float a, // параметр
        b, //параметр
        xn, // начальное значение аргумента x
        xk, // конечное значение аргумента x
        dx, // шаг 
        z; // значение функции z
     // ввод a, xn, xk, dx
    setlocale(LC_ALL, "Rus");
    printf("Введите параметр a: ");
    scanf("%f", &a);
    printf("Введите параметр b: ");
    scanf("%f", &b);
   // x = 0;
   // z = 1;
    do
    {
        printf("Введите xn: ");
        scanf("%f", &xn);
        printf("Введите xk:");
        scanf("%f", &xk);
        if (xn > xk)
        {
            printf("Начальное значение не может быть больше конечного \n") ;
        }
        else break;
    } while (xn > xk);
    printf("Введите шаг dx: ");
    scanf("%f", &dx);
     // вывод заголовка и шапки таблицы
    printf("Таблица значений функции z=f(x)\n");
    printf(" _________________________\n");
    printf(" |    x     |  z = f(x) |\n");
    printf(" _________________________\n"); 
    while (xk >= xn)
    {
        // вывод строки таблицы
        printf(" | %-9.3f|", xn);  // вывод аргумента x
        // вычисление значения функции z
        (xn <= a) ? (z = pow(xn, 2) + sin(xn)) : ((xn < b) ? (z = cos(pow(xn, 2))) : (z = tan(xn)));
        // вывод значения функции z
        // целочисленное или вещественное z
        (a > 10) ? (printf(" %-10d|\n", (int)z)): (printf(" %-10.3f|\n", z));
        xn += dx;
    };
    printf(" _________________________\n");
    return 0; }
