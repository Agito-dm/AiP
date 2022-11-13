#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, x, z; // введение переменных
    
	printf ("Input parameter a: ");
	scanf ("%f", &a); // ввод числа a
	printf ("Input parameter b: ");
	scanf ("%f", &b); // ввод числа b
	printf ("Input the argument x: ");
	scanf ("%f", &x); // ввод числа x
	if (x <= a)
	    z = log10(x) + fabs(x);
	else if (x > a && x < b)
	    z = pow(x, 3) * cos(x);
	else if (x >= b)
	    z = pow(x, 5);
	if (x > 0)
	    printf ("Res is %f\n", z);

	return 0;
}
