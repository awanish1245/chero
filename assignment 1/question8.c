#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    
    printf("Enter the number of days: ");
    scanf("%d", totalDays);
    years = totalDays / 365;         
    totalDays = totalDays % 365;         

    weeks = totalDays / 7;         
    days = totalDays % 7;                  
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", 
           totalDays + (years * 365) + (weeks * 7), years, weeks, days);

    return 0;
}
