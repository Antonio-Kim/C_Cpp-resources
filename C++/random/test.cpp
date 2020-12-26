#include <iostream>
#include <memory>
using namespace std;

int main(void)
{
    std::unique_ptr<int[]> a{new int[5]};
    for (int i = 0; i < 5; i++)
        a[i] = i;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
