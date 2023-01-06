#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        int s = size(menu);
        if (x < 0 or x > s) throw 0;
            cout<<menu[x];
    }
    catch(...) {
        //and here
                cout << "404 - not found";
    }
}