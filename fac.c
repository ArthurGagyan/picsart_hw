#include <stdio.h>

int main() {
    int num;
    unsigned long long fac = 1; 
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative number\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fac *= i;
        }
        printf("%llu\n", fac);
    }

    return 0;
}

