#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i = 1;

    cin >> n;

    cout << i << " ";
    while(n > i){
        i++;
        if(i % 3 == 0)
            continue;
        cout << i << " ";
    }
    
    return 0;
}