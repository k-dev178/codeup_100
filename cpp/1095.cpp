#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n,tmp;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(begin(arr), end(arr));

    cout << arr[0] << "\n";

    return 0;
}