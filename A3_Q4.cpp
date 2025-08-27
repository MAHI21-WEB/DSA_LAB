#include <iostream>
using namespace std;

class Stack {
    char arr[100];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(char x) {
        if (isFull()) {
            cout << "Stack Overflow!\n";
        } else {
            arr[++top] = x;
        }
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return '\0';
        } else {
            return arr[top--];
        }
    }

    char peek() {
        if (isEmpty()) {
            return '\0';
        } else {
            return arr[top];
        }
    }
};

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main() {
    Stack st;
    string exp;
    cin >> exp;

    cout << "Infix expression: " << exp << endl;

    string result;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result += c;
        }

        
        else if (c == '(') {
            st.push(c);
        }

        
        else if (c == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                result += st.pop();
            }
            if (!st.isEmpty())
                st.pop(); 
        }

        
        else {
            while (!st.isEmpty() && prec(c) <= prec(st.peek())) {
                result += st.pop();
            }
            st.push(c);
        }
    }

    
    while (!st.isEmpty()) {
        result += st.pop();
    }

    cout << "Postfix expression: " << result << endl;

    return 0;
}
