#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;

    int ar[r][c];
    
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> ar[i][j];
            
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<ar[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    
    for (int i = 0; i < r; i++) {
        int sumr = 0;
        for (int j = 0; j < c; j++)
            {
                sumr += ar[i][j];
            }
        cout << sumr << "\n";
    }
    
    for (int i = 0; i < c; i++) {
        int sumc = 0;
        for (int j = 0; j < r; j++)
                sumc += ar[j][i];
        cout << sumc << "\n";
    }
    

    return 0;
}
