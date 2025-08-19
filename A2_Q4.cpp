// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    string a;
    string b;
    
    //a
    cin>>a>>b;
    cout<<a+b<<endl;
    
    //b
    string newstr="";
    for(int i=a.length()-1;i>=0;i--)
        newstr+=a[i];
    cout<<newstr<<endl;
    
    //c
    newstr="";
    for(int i=0;i<a.length();i++)
    {
       if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       continue;
       newstr+=a[i];
    }
    cout<<newstr<<endl;
    
    //d
    newstr="";
    for(char i='A';i<='Z';i++)
    {
        for(int j=0;j<a.length();j++)
        {
            if(a[j]==i || (char)(a[j]-32)==i)
                newstr+=a[j];
        }
    }
    cout<<newstr<<endl;
    
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            cout<<(char)(a[i]+32);
        else cout<<a[i];
    }

    return 0;
}
