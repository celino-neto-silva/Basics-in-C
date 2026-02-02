#include<stdio.h>

int main(void){
    int a = 5, b = 3;

    //AND
    int result = (a & b);
    printf("%d & %d is %d\n", a, b, result);

    //OR
    result = (a | b);
    printf("%d | %d is %d\n", a, b, result);

    //XOR
    result = (a ^ b);
    printf("%d ^ %d is %d\n", a, b, result);

    //NOT
    result = (~a);
    printf("~%d is %d\n", a, result);

    //Bits to left <<
    result = (a << 1);
    printf("%d << 1 is %d\n", a, result);

    //Bits to right >>
    result = (a >> 1);
    printf("%d >> 1 is %d\n", a, result);

    return 0;
}