#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int A[n*(n+1)/2];  // n(n+1)/2 elements
    int k=0;

    // set values
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << "Enter A["<<i+1<<"]["<<j+1<<"]: ";
            cin >> A[k++];
        }
    }

    // display
    cout << "\nLower Triangular Matrix:\n";
    k=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i>=j) cout << A[i*(i+1)/2 + j] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    
    cout << "\nUpper Triangular Matrix:\n";
    k=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i<=j) cout << A[i*n - (i*(i-1))/2 + (j-i)] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}
