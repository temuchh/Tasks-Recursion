#include <iostream>
using namespace std;

// Задача 18: Flatten вкладених дужок
// Перевірити рекурсивно, чи правильно розставлені дужки
// open_count — кількість відкритих дужок, що не закриті
bool check_brackets(const char* str, int index, int open_count) {
    if (open_count < 0) return false;          // зайва закрита дужка
    if (str[index] == '\0') return open_count == 0; // кінець — всі закриті?

    if (str[index] == '(')
        return check_brackets(str, index + 1, open_count + 1);
    if (str[index] == ')')
        return check_brackets(str, index + 1, open_count - 1);

    return check_brackets(str, index + 1, open_count); // інший символ
}

int main() {
    const char* tests[] = {"(())", "()", "())", "()(", "((()))", ""};

    for (const char* s : tests) {
        bool result = check_brackets(s, 0, 0);
        cout << "\"" << s << "\" -> " << (result ? "true" : "false") << endl;
    }

    return 0;
}
