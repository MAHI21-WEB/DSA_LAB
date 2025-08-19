// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
        
    int ele;
    cin>>ele;
        
    int flag=0;
    
    int s=0, e=n-1, m=0;
    while(s<=e)
    {
        m=s+(e-s)/2;
        if(ar[m]==ele)
        {
            flag=1;
            break;
        }
        else if(ar[m]>ele)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
    }
    if(flag==1)
        cout<< "Element found a index "<< m;
    else
        cout<<"Element Not Found";

    return 0;
}
