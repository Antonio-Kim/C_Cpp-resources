#include <iostream>
using namespace std;

int main(void)
{
    int& a = *new int([5]);
    a[0] = 4;
    cout << a << endl;

    return 0;
}
