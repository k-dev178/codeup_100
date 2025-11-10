#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    loop:
    cin >> num;
    if(num != 0){
        cout << num << "\n";
        goto loop;
    }
    
    return 0;
}