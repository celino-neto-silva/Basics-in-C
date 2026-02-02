#include<stdio.h>

int main(void){
    //Somatory operation
    int a = 5, b = 3;
    int sum = a + b;
    printf("The sum between %d and %d = %d\n", a, b, sum);

    //Subtraction operation
    int subtraction = a - b;
    printf("The subtraction between %d and %d = %d\n", a, b, subtraction);

    //Multiplication operation
    int multiplication = a * b;
    printf("The multiplication between %d and %d = %d\n", a, b, multiplication);

    //Division operation
    int division = a / b;
    printf("The division between %d and %d = %d\n", a, b, division);

    //The Module operation
    int module = a % b;
    printf("The rest of division between %d and %d = %d\n", a, b, module);

    //Increment operation
    a++;
    printf("Increment = %d\n", a);

    //Decrement operation
    b--;
    printf("Decrement = %d\n", b);

    return 0;
}