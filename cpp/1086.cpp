#include <bits/stdc++.h>
using namespace std;

int main()
{
    float w,h,b;
    float result;

    cin >> w >> h >> b;

    result = ((w*h*b) / 8 / 1024 / 1024);
    cout << fixed << setprecision(2) << result << " MB\n";
    
    return 0;
}