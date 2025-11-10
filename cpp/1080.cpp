#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,i,result = 0;

    cin >> num;
    for(i = 1;num > result;i++){
        result += i;
    }

    cout << i-1;

    return 0;
}