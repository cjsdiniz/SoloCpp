#include <iostream>
using namespace std;

class test
{
    public:
        void foo() {
            // cout << "Drawing...";
        }
};
int main()
{
    test *myPtr = new test();
    myPtr->foo();
}
