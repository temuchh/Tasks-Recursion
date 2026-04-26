#include <iostream>
#include <vector>
using namespace std;

// Задача 5: Рекурсивний максимум
template<typename T>
T recursive_max(vector<T>& v, int index) {
    if (index == (int)v.size() - 1) return v[index];
    T rest = recursive_max(v, index + 1);
    return v[index] > rest ? v[index] : rest;
}

int main() {
    vector<int> v1 = {3, 7, 2, 9, 4};
    cout << "max({3,7,2,9,4}) = " << recursive_max(v1, 0) << endl;

    vector<double> v2 = {1.5, 3.2, 0.8, 2.7};
    cout << "max({1.5,3.2,0.8,2.7}) = " << recursive_max(v2, 0) << endl;

    return 0;
}
