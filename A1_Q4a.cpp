#include <iostream>
using namespace std;


void print(int ar[], int n)
{
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
}

int main() {
    
    //input
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
        
    //print original array
    print(ar,n);
    
    //reverse
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++;
        j--;
    }
    
    cout<<"\n";
    
    //print new array
    print(ar,n);   
    
    
    return 0;
}
