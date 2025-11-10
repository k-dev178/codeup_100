#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n,tmp;

    cin >> n;

    i = 0;
    loop:
    if(i < n){
        cin >> tmp;
        cout << tmp << "\n";
        i++;
        goto loop;
    }
    return 0;
}