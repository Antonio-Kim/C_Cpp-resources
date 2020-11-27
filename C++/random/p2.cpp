#include <iostream>
#include <cstdlib>

int main()
{
    char c[] = {'C', 'A', 'T'};
    char* p = c;
    char* q = &c[0];
    char* r = &c[1];

    std::cout << c[2] << p[2] << q[2] << r[0] << std::endl;

    return EXIT_SUCCESS;
}
