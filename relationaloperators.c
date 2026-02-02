#include<stdio.h>

int main(void){
    int a = 5, b = 3;

    //Equality
    int result = (a == b);
    printf("%d is equal %d? %s\n", a, b, result==1?"True":"False");

    //Diferençe
    result = (a != b);
    printf("%d is diferent %d? %s\n", a, b, result==1?"True":"False");

    //Greater than
    result = (a > b);
    printf("%d is greater than %d? %s\n", a, b, result==1?"True":"False");

    //Less than
    result = (a < b);
    printf("%d is minor than %d? %s\n", a, b, result==1?"True":"False");

    //Greater than or equal
    result = (a >= b);
    printf("%d is greater ou equal than %d? %s\n", a, b, result==1?"True":"False");    

    //Less than or equal
    result = (a <= b);
    printf("%d is minor or equal than %d? %s\n", a, b, result==1?"True":"False");

    return 0;
}