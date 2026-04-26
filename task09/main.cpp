#include <iostream>
#include <vector>
using namespace std;

// Задача 9: Паліндром
bool is_palindrome(vector<char>& v, int left, int right) {
    if (left >= right) return true;
    if (v[left] != v[right]) return false;
    return is_palindrome(v, left + 1, right - 1);
}

int main() {
    vector<char> v1 = {'a', 'b', 'b', 'a'};
    vector<char> v2 = {'a', 'b', 'c'};
    vector<char> v3 = {'r', 'a', 'c', 'e', 'c', 'a', 'r'};

    cout << "{'a','b','b','a'} palindrome: " << (is_palindrome(v1, 0, v1.size()-1) ? "true" : "false") << endl;
    cout << "{'a','b','c'} palindrome:     " << (is_palindrome(v2, 0, v2.size()-1) ? "true" : "false") << endl;
    cout << "{'r','a','c','e','c','a','r'}: " << (is_palindrome(v3, 0, v3.size()-1) ? "true" : "false") << endl;

    return 0;
}
