    
#include <iostream>
using namespace std;


int main() {
    int x=13432;
    // cin >> x;
    //int a[x];
    int remainder;
    int reverse = 0;
    while (x != 0) {
            remainder = x % 10 ;
            cout << "Rem: " << remainder << endl;
            reverse = reverse * 10 + remainder;
            cout << "Rev: " << reverse << endl;
            x /= 10;
            cout << "X: " << x << endl;
        }
    cout << reverse;
}