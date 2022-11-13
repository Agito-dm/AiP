#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
	float a, b, x, z; // введение переменных
	cout << "Input parameter a: ";
	cin >> a; // ввод числа a
	cout << "Input parameter b: ";
	cin >> b; // ввод числа b
	cout << "Input the argument x: ";
	cin >> x; // ввод числа x
//	cout << "User wrote - " << a + 10;
	if (x <= a)
//	    if (x <= 0)
//	        cout << "Mistake";
		z = log10(x) + abs(x);
	else if (x > a && x < b)
		z = pow(x, 3) * cos(x);
	else if (x >= b)
		z = pow(x, 5);
	if (x > 0)
	    cout << "Function value z = " << z;
	return 0;
}
