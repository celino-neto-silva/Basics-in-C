#include <stdio.h>

int main(void){
    printf("Sizeof() -> How to know the size in bytes\n");

    int a = 5;
    printf("The size of %d is %lu bytes\n", a, sizeof(a));

    double b = 3.14;
    printf("The size of %lf is %lu bytes\n", b, sizeof(b));

    char c = 'A';
    printf("The size of %c is %lu bytes\n", c, sizeof(c));

    return 0;
}