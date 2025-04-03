#include <stdio.h>

int main() {
    int number;
    int isLucky = 1; 

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10; 

        if (digit != 4 && digit != 7) {
            isLucky = 0;
            break;
        }

        number /= 10;
    }

    if (isLucky) {
        printf("The number is a lucky number\n");
    } else {
        printf("The number is not a lucky number\n");
    }

	return 0;
}
