#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int a = 0, b = 1, temp;

    for (int i = 1; i < n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%d\n", b);
    
    return 0;
}
