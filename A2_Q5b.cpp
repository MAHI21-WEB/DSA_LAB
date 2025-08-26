#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int A[3*n-2];  

    // set values
    for (int i=0; i<n; i++) {
        if (i>0) { cout << "Enter A["<<i+1<<"]["<<i<<"]: "; cin >> A[i-1]; }        // lower diag
        cout << "Enter A["<<i+1<<"]["<<i+1<<"]: "; cin >> A[n+i-1];                 // main diag
        if (i<n-1) { cout << "Enter A["<<i+1<<"]["<<i+2<<"]: "; cin >> A[2*n+i-1]; } // upper diag
    }

    // display
    cout << "\nTri-diagonal Matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i-j==1) 
              cout << A[i-1] << " ";
            else if (i==j) 
              cout << A[n+i-1] << " ";
            else if (i-j==-1)
              cout << A[2*n+i-1] << " ";
            else 
              cout << "0 ";
        }
        cout << endl;
    }
}
