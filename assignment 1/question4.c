// Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
#include<stdio.h>
int main(){
    float r;
    float pi = 3.14;
    printf("enter radius");
    scanf("%f", &r);
    float v = (4*pi*r*r*r)/3;
    printf("%f", v);
    return 0;
}