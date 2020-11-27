#include <cstddef>
#include <cstdio>

int main()
{
    size_t size_c = sizeof(char);
    size_t size_s = sizeof(short);
    size_t size_i = sizeof(int);
    size_t size_l = sizeof(long);
    size_t size_ll = sizeof(long long);

    printf("char: %zu\n", size_c);
    printf("short: %zu\n", size_s);
    printf("int: %zu\n", size_i);
    printf("long: %zu\n", size_l);
    printf("long long: %zu\n", size_ll);
}
