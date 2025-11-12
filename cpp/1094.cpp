#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tmp;
    vector<int> arr;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }

    reverse(begin(arr),end(arr));

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}