#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int r;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int lcm(int x, int y) {
    return x / gcd(x, y) * y;
}

int main() {
    int a, b, c, result;
    
    cin >> a >> b >> c;

    result = lcm(lcm(a, b), c);
    cout << result;

    return 0;
}