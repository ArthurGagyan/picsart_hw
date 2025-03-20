#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev = 0;

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    while (rev > 0) {
        printf("%d", rev % 10);
        rev /= 10;
        if (rev > 0) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}

