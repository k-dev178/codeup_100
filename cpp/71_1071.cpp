#include <iostream>
using namespace std;

int main()
{
    int n;

    reload:
    cin >> n;
    
    if(n!=0){
        cout << n << "\n";
        goto reload;
    }
    
    return 0;
}