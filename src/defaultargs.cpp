#include <iostream>
#include <string>
using namespace std;

//complete the function with one default argument
void printOrder(string x, string y = "Black tea") {
    cout << y << endl << x;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;
    
    printOrder(friendOrder);
    
    return 0;
}