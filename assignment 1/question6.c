//. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
int main() {
    int total_minutes;
    int hours, minutes;

    printf("Enter the number of minutes: ");
    scanf("%d", &total_minutes);


    hours = total_minutes / 60;
    minutes = total_minutes % 60;         

    
    printf("%d minutes is equal to %d hours and %d minutes.\n", total_minutes, hours, minutes);

    return 0;
}
