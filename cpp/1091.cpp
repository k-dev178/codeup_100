#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,m,d,n;
    long long int result;

    cin >> a >> m >> d >> n;

    result = a;

    for(int i = 0; i < n-1; i++){
        result *= m;
        result += d;
    }

    cout << result << "\n";
    
    return 0;
}