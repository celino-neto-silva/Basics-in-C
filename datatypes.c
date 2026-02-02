#include<stdio.h>

int main(void){
    int age = 25;
    float height = 1.74;
    char sex = 'M';
    _Bool married = 0;

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Sex: %s\n", sex=='M'?"Male":"Female");
    printf("Marriage: %s\n", married==1?"Married":"No married");
}