#include <iostream>
#include <vector>
using namespace std;

// Задача 8: Перевірка відсортованості
template<typename T>
bool recursive_is_sorted(vector<T>& v, int index) {
    if (index >= (int)v.size() - 1) return true;
    if (v[index] > v[index + 1]) return false;
    return recursive_is_sorted(v, index + 1);
}

int main() {
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {1, 5, 3, 7};

    cout << "{1,3,5,7} is sorted: " << (recursive_is_sorted(v1, 0) ? "true" : "false") << endl;
    cout << "{1,5,3,7} is sorted: " << (recursive_is_sorted(v2, 0) ? "true" : "false") << endl;

    return 0;
}
