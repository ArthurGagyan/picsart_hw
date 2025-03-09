#include <stdio.h>

int main() {
    int total_days, years, months, days;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;       
    total_days %= 365;              
    months = total_days / 30;      
    days = total_days % 30;      

    printf(" %d years, %d months, and %d days\n", years, months, days);

    return 0;
}

