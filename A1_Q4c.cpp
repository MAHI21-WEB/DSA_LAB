#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;

    int ar[r][c];
    int trans[c][r];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> ar[i][j];
            
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << ar[i][j] << " ";
        cout << "\n";
    }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i]=ar[i][j];

    

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << trans[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
