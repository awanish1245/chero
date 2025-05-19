//7.  Write a C program to find the third angle of a triangle if two angles are given. 
#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter angle1");
    scanf("%d", &angle1);
    printf("enter angle2");
    scanf("%d", &angle2);
    angle3 = 180-(angle1+angle2);
    printf("%d", angle3);
    return  0;
}