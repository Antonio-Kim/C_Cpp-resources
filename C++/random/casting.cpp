#include <iostream>
#include <cstdlib>

int main()
{
    double d1 = 3.2;
    double d2 = 3.9999;
    std::cout << d1 << " " << d2 << std::endl;
    int i1 = static_cast<int>(d1);
    int i2 = static_cast<int>(d2);
    std::cout << i1 << " " << i2 << std::endl;

    return EXIT_SUCCESS;
}
