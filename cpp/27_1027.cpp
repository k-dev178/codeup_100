#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int y,m,d;
    char a,b;

    cin >> y >> a >> m >> b >> d;

    cout << setfill('0') << setw(2) << d << "-" 
    << setfill('0') << setw(2) << m << "-" 
    << y << "\n";

    return 0;
}