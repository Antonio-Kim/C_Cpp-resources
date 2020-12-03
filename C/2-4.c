#include <stdio.h>

void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main(void){
    int a = 21;
    int b = 17;
    printf("Before swap:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:\na = %d, b = %d\n", a, b);
    return 0;
}
