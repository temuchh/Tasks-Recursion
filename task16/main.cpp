#include <iostream>
#include <vector>
using namespace std;

// Задача 16: Генерація всіх підмножин
// На кожному кроці: або беремо елемент, або ні
void subsets(vector<int>& v, vector<int>& current, int index) {
    if (index == (int)v.size()) {
        cout << "{";
        for (int i = 0; i < (int)current.size(); i++) {
            cout << current[i];
            if (i < (int)current.size() - 1) cout << ",";
        }
        cout << "}" << endl;
        return;
    }
    // Не беремо v[index]
    subsets(v, current, index + 1);

    // Беремо v[index]
    current.push_back(v[index]);
    subsets(v, current, index + 1);
    current.pop_back();
}

int main() {
    vector<int> v = {1, 2, 3};
    vector<int> current;

    cout << "All subsets of {1,2,3}:" << endl;
    subsets(v, current, 0);

    return 0;
}
