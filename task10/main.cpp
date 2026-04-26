#include <iostream>
using namespace std;

// Задача 10: Швидке піднесення до степеня — O(log n)
// x^0 = 1
// x^n = (x^(n/2))^2  якщо n парне
// x^n = x * x^(n-1)  якщо n непарне
double fast_power(double x, int n) {
    if (n == 0) return 1.0;
    if (n % 2 == 0) {
        double half = fast_power(x, n / 2);
        return half * half;
    }
    return x * fast_power(x, n - 1);
}

int main() {
    cout << "fast_power(2.0, 10) = " << fast_power(2.0, 10) << endl;
    cout << "fast_power(3.0, 8)  = " << fast_power(3.0, 8)  << endl;
    cout << "fast_power(2.0, 0)  = " << fast_power(2.0, 0)  << endl;

    return 0;
}
