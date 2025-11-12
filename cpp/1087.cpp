#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i = 1,result = 0;

    cin >> n;

    while(result < n){
        result += i;
        i++;
    }

    cout << result << '\n';
    
    return 0;
}