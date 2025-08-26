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

    cout << "\nSymmetric Matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i>=j) cout << A[i*(i+1)/2 + j] << " ";
            else cout << A[j*(j+1)/2 + i] << " "; // symmetric property
        }
        cout << endl;
    }
}
