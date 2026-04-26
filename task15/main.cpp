#include <iostream>
#include <vector>
using namespace std;

// Задача 15: Кількість способів піднятися сходами
// За один крок: 1 або 2 сходинки
// ways(n) = ways(n-1) + ways(n-2)  — числа Фібоначчі!
int climb_stairs(int n, vector<int>& memo) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = climb_stairs(n - 1, memo) + climb_stairs(n - 2, memo);
    return memo[n];
}

int climb_stairs(int n) {
    vector<int> memo(n + 1, -1);
    return climb_stairs(n, memo);
}

int main() {
    cout << "climb_stairs(1) = " << climb_stairs(1) << endl;
    cout << "climb_stairs(3) = " << climb_stairs(3) << endl;
    cout << "climb_stairs(5) = " << climb_stairs(5) << endl;
    cout << "climb_stairs(6) = " << climb_stairs(6) << endl;

    return 0;
}
