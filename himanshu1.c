#include <stdio.h>

    int main () {
    float a, b;
    printf("enter a");
    scanf("%f", &a);

    printf("enter b");
    scanf("%f", &b);
     
    float multiply = a * b;
    printf("multiply is : %f", multiply);
    return 0;
}