#include <iostream>
using namespace std;

// Задача 1: Степінь числа
// x^0 = 1, x^n = x * x^(n-1)
double power(double x, int n) {
    if (n == 0) return 1.0;
    return x * power(x, n - 1);
}

int main() {
    cout << "power(2.0, 10) = " << power(2.0, 10) << endl;
    cout << "power(3.0, 4)  = " << power(3.0, 4)  << endl;
    cout << "power(5.0, 0)  = " << power(5.0, 0)  << endl;
    return 0;
}
