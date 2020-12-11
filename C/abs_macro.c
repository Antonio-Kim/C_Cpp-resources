#include <stdio.h>

#define Abs(i) ((i) < 0? -i : (i))

int main(void){
    signed int si = -25;
    signed int abs_si = Abs(si);
    printf("%d turns to %d using Abs macro.\n", si, abs_si);

    return 0;
}
