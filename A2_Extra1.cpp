
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    int k;
    cin>>k;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    unordered_map<int, int> map;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      
        
        if (map.find(arr[i] + k) != map.end()) 
            cnt += map[arr[i] + k]; 
      
        
        
        if (map.find(arr[i] - k) != map.end()) 
            cnt += map[arr[i] - k]; 
      
        
        map[arr[i]]++; 
    }
    cout<< cnt;
    return 1;
}
