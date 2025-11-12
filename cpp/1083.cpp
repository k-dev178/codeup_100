#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i = 1;
    
    cin >> n;
    loop:
    switch(i){
        case 3:
        case 6:
        case 9:
            cout << "X" << " ";
            break;
        default:
            cout << i << " ";
    }
    i++;
    if(i <= n) goto loop;

    return 0;
}