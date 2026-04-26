#include <iostream>
using namespace std;

// Задача 3: Кількість цифр
int digit_count(int n) {
    if (n < 10) return 1;
    return 1 + digit_count(n / 10);
}

int main() {
    cout << "digit_count(1234) = " << digit_count(1234) << endl;
    cout << "digit_count(7)    = " << digit_count(7)    << endl;
    cout << "digit_count(100)  = " << digit_count(100)  << endl;
    return 0;
}
