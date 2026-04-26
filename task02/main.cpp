#include <iostream>
using namespace std;

// Задача 2: Сума цифр
// Остання цифра: n % 10, решта числа: n / 10
int digit_sum(int n) {
    if (n < 10) return n;
    return (n % 10) + digit_sum(n / 10);
}

int main() {
    cout << "digit_sum(1234) = " << digit_sum(1234) << endl;
    cout << "digit_sum(999)  = " << digit_sum(999)  << endl;
    cout << "digit_sum(7)    = " << digit_sum(7)    << endl;
    return 0;
}
