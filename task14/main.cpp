#include <iostream>
#include <vector>
using namespace std;

// Задача 14: Підрахунок шляхів у сітці m×n
// Рух тільки вправо або вниз
// paths(m, n) = paths(m-1, n) + paths(m, n-1)
int count_paths(int m, int n, vector<vector<int>>& memo) {
    if (m == 1 || n == 1) return 1;
    if (memo[m][n] != -1) return memo[m][n];
    memo[m][n] = count_paths(m - 1, n, memo) + count_paths(m, n - 1, memo);
    return memo[m][n];
}

int count_paths(int m, int n) {
    vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));
    return count_paths(m, n, memo);
}

int main() {
    cout << "count_paths(3, 3) = " << count_paths(3, 3) << endl;
    cout << "count_paths(4, 4) = " << count_paths(4, 4) << endl;
    cout << "count_paths(2, 5) = " << count_paths(2, 5) << endl;

    return 0;
}
