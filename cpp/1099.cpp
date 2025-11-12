#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr(10, vector<int>(10));
    int tmp;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }

    int x = 2, y = 2;

    while(true){
        if(arr[y-1][x-1] == 2){
            arr[y-1][x-1] = 9;
            break;
        }

        arr[y-1][x-1] = 9;

        // 오른쪽으로 가기
        if(x < 10 && arr[y-1][x] != 1)
            x++;
        
        // 아래로 가기
        else if(y < 10 && arr[y][x-1] != 1)
            y++;
        
        // 둘다 막힘
        else
            break;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
           cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}