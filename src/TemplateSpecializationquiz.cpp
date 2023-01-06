#include <iostream>
using namespace std;

template <class T>
class Div {
    public:
        Div (T x, T y) {
            cout <<x / y<<endl;
        }
};

//your code goes here
template< >
class Div<string>{
  public:
    Div(string a, string b) {
      cout << size(a) / size(b) << endl;
  } 
};

int main () {
    string a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    
    Div <string> d2(a, b);
    Div <int> d1(x, y);
    
}