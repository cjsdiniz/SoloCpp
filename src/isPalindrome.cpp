#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int ini=x;
    int remainder;
    int reverse = 0;
    while (x != 0) {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    cout << ini << " | " << reverse;
    if (ini == reverse){
        
        return true;
    } else { 
        return false;
    };
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}