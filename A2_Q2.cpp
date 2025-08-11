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
    
    //remove duplicates
    int k=1;
    for(int i=1;i<n;i++)
    {
        int flag=1;
        for(int j=0;j<i;j++)
        {
            if(ar[i]==ar[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            ar[k++]=ar[i];
        }
    }
    
    cout<<"\n";
    
    //print new array
    for(int i=0;i<k;i++)
    {
        cout<<ar[i]<<" ";
    }
        
    
    
    return 0;
}
