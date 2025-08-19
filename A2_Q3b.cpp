// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int ar[n-1];
    
    for (int i = 0; i < n - 1; i++)
        cin >> ar[i];

    int s = 0, e = n - 2, m;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (ar[m] - m > 1) {
            e = m - 1;   
        } else {
            s = m + 1;   
        }
    }
    
    cout<<s+1;

    return 0;
}
