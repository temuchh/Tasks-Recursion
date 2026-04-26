#include <iostream>
using namespace std;

// Задача 4: Переведення в двійкову систему
// Спочатку рекурсивний виклик для n/2, потім виведення n%2
void print_binary(int n) {
    if (n == 0) return;
    print_binary(n / 2);
    cout << (n % 2);
}

int main() {
    cout << "print_binary(13) = ";
    print_binary(13);
    cout << endl;

    cout << "print_binary(8)  = ";
    print_binary(8);
    cout << endl;

    cout << "print_binary(1)  = ";
    print_binary(1);
    cout << endl;

    return 0;
}
