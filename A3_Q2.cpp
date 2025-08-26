#include <iostream>
#include <cstring>
using namespace std;



int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();
    char stack[100];
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (top == 100-1) {
            cout << "Stack Overflow\n";
            return 0;
        }
        stack[++top] = str[i];
    }

    cout << "Reversed string: ";
    while (top != -1) {
        cout << stack[top--];
    }
    cout << endl;

    return 0;
}
