#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;
    cout << a+b << "\n";
    cout << a-b << "\n";
    cout << a*b << "\n";
    cout << a/b << "\n";
    cout << a%b << "\n";

    cout << fixed;
    cout.precision(2);
    cout << (float)a/b << "\n";
    
    return 0;
}