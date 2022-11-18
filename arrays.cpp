#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int b[]={11,45, 62,70, 88};
    cout << b[0] << endl;
    cout << b[3] << endl;
    b[2]=55;
    cout << b[2] << endl;

    int myArr[5];

    for(int x=0; x<5; x++) {
        myArr[x] = 42;
        cout << myArr[x] << endl;
    }
    
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    
    //your code goes here
    double discount = 0.0;
    double price = 0.0;
    cout << "Discount: " << endl;
    cin >> discount;

    for (int i =0; i<11; i++){
        price = items[i] - (items[i]*(discount/100));
        cout << price << " ";
    }

    return 0;
}