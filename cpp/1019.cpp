#include <bits/stdc++.h>
using namespace std;

int main(){
    int y,m,d;
    char c;

    cin >> y >> c >> m >> c >> d;
    
    cout << setfill('0');
    cout << setw(4) << y << "." 
    << setw(2) << m  << "."
    << setw(2) << d << '\n';
    
    return 0;
}