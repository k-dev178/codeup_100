#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr(19, vector<int>(19, 0));
    int n,x,y;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        arr[x-1][y-1] = 1;
    }

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}