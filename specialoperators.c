#include <stdio.h>

int main(void){
    printf("Sizeof() -> How to know the size in bytes\n");

    int a = 5;
    printf("The size of %d is %lu bytes\n", a, sizeof(a));

    double b = 3.14;
    printf("The size of %lf is %lu bytes\n", b, sizeof(b));

    char c = 'A';
    printf("The size of %c is %lu bytes\n", c, sizeof(c));

    printf("------------------------------------------\n");
    printf("\n");

    printf("Address(&) and Pointer(*) -> Access address \n");

    int *p = &a;

    printf("The value of A is %d\n", a);
    printf("The address of A is %p\n", &a);
    printf("The value stored by the pointer is %p\n", p);
    printf("The value acessed by the pointer is %d\n", *p);

    *p = 10;
    printf("The new value of A is %d\n", a);

    printf("------------------------------------------\n");
    printf("\n");

    printf("Ternary operator\n");

    int x = 7, y = 9;

    printf("%d is greater than %d?: %s\n", x, y, (x > 7)?"Is Greater":"Is not greater");
    return 0;
}