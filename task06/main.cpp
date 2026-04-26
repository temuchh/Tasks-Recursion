#include <iostream>
#include <vector>
using namespace std;

// Задача 6: Рекурсивний підрахунок входжень
template<typename T>
int recursive_count(vector<T>& v, T value, int index) {
    if (index == (int)v.size()) return 0;
    int found = (v[index] == value) ? 1 : 0;
    return found + recursive_count(v, value, index + 1);
}

int main() {
    vector<int> v = {1, 3, 2, 3, 3};
    cout << "count(3) in {1,3,2,3,3} = " << recursive_count(v, 3, 0) << endl;
    cout << "count(1) in {1,3,2,3,3} = " << recursive_count(v, 1, 0) << endl;
    cout << "count(9) in {1,3,2,3,3} = " << recursive_count(v, 9, 0) << endl;

    return 0;
}
