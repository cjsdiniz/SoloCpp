#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // teste
    srand(time(0));
    for (int i = 0; i <13; i++){
        cout << 1+ rand() % 6 << endl;
    }
    return 0;

}