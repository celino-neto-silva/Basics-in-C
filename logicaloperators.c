#include<stdio.h>

int main(void){
    int a = 1, b = 1;

    //AND
    int result = (a && b);
    printf("%d && %d is equal %s\n", a, b, result?"True":"False");

    //OR
    result = (a || b);
    printf("%d || %d is equal %s\n", a, b, result?"True":"False");

    //NOT
    result = !a;
    printf("%d inverse ! is equal %s\n", a, result?"True":"False");

    //Combination of Logical Operators
    result = (a && b) || !a;
    printf("(%d && %d) || !%d is equal %s\n", a, b, a, result?"True":"False");
}