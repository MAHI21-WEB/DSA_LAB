#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    cout << "\nDiagonal Matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}
