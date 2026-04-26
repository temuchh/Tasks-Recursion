#include <iostream>
#include <vector>
using namespace std;

// Задача 17: Рекурсивне сортування вибором
// Знайти мінімум, поставити на перше місце, рекурсивно відсортувати решту
template<typename T>
void recursive_selection_sort(vector<T>& v, int start) {
    if (start >= (int)v.size() - 1) return;

    int minIndex = start;
    for (int i = start + 1; i < (int)v.size(); i++) {
        if (v[i] < v[minIndex]) minIndex = i;
    }

    if (minIndex != start) swap(v[start], v[minIndex]);

    recursive_selection_sort(v, start + 1);
}

int main() {
    vector<int> v = {64, 25, 12, 22, 11};

    cout << "Before: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    recursive_selection_sort(v, 0);

    cout << "After:  ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
