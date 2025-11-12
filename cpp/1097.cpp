#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr(19, vector<int>(19, 0));
    int tmp,x,y,n;

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }
    cin >> n;

    for(int k = 0; k < n; k++){
        cin >> x >> y;

        for(int i = 0; i < 19; i++){ // 가로줄
            if(arr[x-1][i] == 1) arr[x-1][i] = 0;
            else arr[x-1][i] = 1;
        }

        for(int j = 0; j < 19; j++){ // 세로줄
            if(arr[j][y-1] == 1) arr[j][y-1] = 0;
            else arr[j][y-1] = 1;
        }
    }

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}