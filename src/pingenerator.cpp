#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int range;
//    cin >> range;
    range = 4;
    for (int i = 0; i < 4; i++){
        cout << 1 + rand() % range;
    }

    return 0;
}