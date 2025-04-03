#include <stdio.h>

int main() {
    int num, temp, remainder, sum = 0, n = 0, power, i;
    
    scanf("%d", &num);
    
    temp = num;

    int copy = num;
    while (copy > 0) {
        copy /= 10;
        n++;
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        power = 1;

        for (i = 0; i < n; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
