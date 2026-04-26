#include <iostream>
using namespace std;

// Задача 12: Ханойські вежі
// Перемістити n дисків зі стрижня from на стрижень to,
// використовуючи стрижень aux як допоміжний
void hanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    hanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n = 3;
    cout << "Hanoi with " << n << " disks:" << endl;
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
