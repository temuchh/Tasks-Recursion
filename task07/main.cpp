#include <iostream>
#include <vector>
using namespace std;

// Задача 7: Рекурсивний reverse
template<typename T>
void recursive_reverse(vector<T>& v, int left, int right) {
    if (left >= right) return;
    swap(v[left], v[right]);
    recursive_reverse(v, left + 1, right - 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Before: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    recursive_reverse(v, 0, v.size() - 1);

    cout << "After:  ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
