// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int ar[n-1];
    for(int i=0;i<n-1;i++)
        cin>>ar[i];
        
    int e_sum=(n*(n+1))/2;
    int sum=0;
    
    for(int i=0;i<n-1;i++)
    {
        sum+=ar[i];
    }
    
    cout<<e_sum-sum;
    

    return 0;
}
