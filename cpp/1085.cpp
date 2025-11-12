#include <bits/stdc++.h>
using namespace std;

int main()
{
    float h, b, c, s;
    float result;

    cin >> h >> b >> c >> s;

    result = ((h*b*c*s) / 8 / 1024 / 1024);
    cout << fixed << setprecision(1) << result << " MB\n";
    
    return 0;
}