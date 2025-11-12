#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,n,l,d,x,y;
    vector<vector<int>> arr;

    cin >> h >> w;
    arr.resize(h, vector<int>(w, 0));

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> l >> d >> x >> y;

        if(d == 0){
            for(int j = 0; j < l; j++){
                arr[x-1][y-1+j] = 1;
            }
        } else{
            for(int j = 0; j < l; j++){
                arr[x-1+j][y-1] = 1;
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}