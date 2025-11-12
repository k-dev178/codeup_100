#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,g,b;

    cin >> r >> g >> b;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < g; j++){
            for(int k = 0; k < b; k++){
                cout << i << " " << j << " " << k << "\n";
            }
        }
    }

    cout << r * g * b << '\n';
    
    return 0;
}