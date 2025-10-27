#include <iostream>
using namespace std;

int main() {
    int score;

    cin >> score;
    
    if(score >= 90)
        cout << "A" << "\n";
    else if(score >= 70)
        cout << "B" << "\n";
    else if(score >= 40)
        cout << "C" << "\n";
    else
        cout << "D" << "\n";

    return 0;
}
