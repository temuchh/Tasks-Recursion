#include <iostream>
using namespace std;

// Задача 11: НСД — алгоритм Евкліда
// gcd(a, b) = gcd(b, a mod b)
// gcd(a, 0) = a
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    cout << "gcd(48, 18) = " << gcd(48, 18) << endl;
    cout << "gcd(100, 75) = " << gcd(100, 75) << endl;
    cout << "gcd(7, 13)   = " << gcd(7, 13)   << endl;

    return 0;
}
