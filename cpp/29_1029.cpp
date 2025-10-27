#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    long double n;

    cin >> n;
    cout << fixed << setprecision(11) << n;

    return EXIT_SUCCESS;
}