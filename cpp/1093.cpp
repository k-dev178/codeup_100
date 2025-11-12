#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[23],n,tmp;
    fill(begin(arr), end(arr), 0);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr[tmp-1] += 1;
    }

    for(int i = 0; i < 23; i++){
        cout << arr[i] << " ";
    }

    return 0;
}