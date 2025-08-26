#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                cout << "Invalid\n";
                return 0;
            }
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                cout << "Invalid\n";
                return 0;
            }
        }
    }
    if (st.empty()) cout << "Valid\n";
    else cout << "Invalid\n";
    return 0;
}
