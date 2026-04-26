#include <iostream>
#include <vector>
using namespace std;

// Задача 13: Фібоначчі з мемоізацією (вектор як кеш)
long long fib_memo(int n, vector<long long>& cache) {
    if (n <= 1) return n;
    if (cache[n] != -1) return cache[n];
    cache[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);
    return cache[n];
}

int main() {
    int n = 10;
    vector<long long> cache(n + 1, -1);

    for (int i = 0; i <= n; i++) {
        cout << "fib(" << i << ") = " << fib_memo(i, cache) << endl;
    }

    return 0;
}
