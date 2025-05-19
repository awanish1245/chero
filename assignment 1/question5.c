//Write a C program that converts kilometers per hour to miles per hour. (1 KM = 0.621371 M)
#include<stdio.h>
int main(){
    float kilometer;
    printf("enter the value of kilometer");
    scanf("%f", &kilometer);
    float miles;
    float miles = kilometer * 0.621371;
    printf("%f", miles);
    return 0;
}