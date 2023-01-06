#include <iostream>
using namespace std;

int main()
{
    // int motherAge = 29;
    // int sonAge = 36;
    // if (sonAge > motherAge) {
    //     throw "Wrong age values";
    // }
    string name;
    cin >> name;
    try {
        int s = size(name);
        if (s < 4 or s > 20){
            throw(s);
            } else 
                cout<<"Valid"<<endl;
    }
    catch(int x) {
        cout<<"Invalid"<<endl;
    }
    
   return 0;
}