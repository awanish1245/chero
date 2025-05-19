/*/ Write a C program that accepts an employee's ID, total worked hours of a month and the amount he 
received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.*/
#include <stdio.h>

int main() {
    int id;
    float hours, rate, salary;
    scanf("%d", &id); 
    scanf("%f", &hours);    
    scanf("%f", &rate);     
    salary = hours * rate;
    printf("%d\n", id); 
    printf("%.2f\n", salary); 

    return 0;
}
