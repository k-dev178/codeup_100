#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int tmp;

    cin >> s;
    
    for(int i = 10000, j = 0; i > 0 ; i = i / 10, j++){
        tmp = s[j] - '0';
        cout << "[" << tmp * i << "]" << "\n";
    }

    return 0;
}