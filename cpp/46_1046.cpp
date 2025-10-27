#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    cout << a+b+c << "\n";
    
    cout << fixed;
    cout.precision(1);
    cout << (float)(a+b+c) / 3 << "\n";

    return 0;
}