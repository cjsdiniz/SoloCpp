#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(98);
    for (int i = 0; i <13; i++){
        cout << rand() % 9 << endl;
    }
    return 0;

}