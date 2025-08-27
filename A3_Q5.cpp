#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
    stack<int> st;
    string exp;

    cout << "Enter Postfix Expression (single-digit operands): ";
    getline(cin, exp);

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        

        if (isdigit(ch)) {
            st.push(ch - '0');   
        } 
        else {
            if (st.size() < 2) {
                cout << "Error: Invalid expression" << endl;
                return 1;
            }

            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (ch) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': st.push(pow(val1, val2)); 
                    break;
            }
        }
    }

    cout << "Result = " << st.top() << endl;
    return 0;
}
