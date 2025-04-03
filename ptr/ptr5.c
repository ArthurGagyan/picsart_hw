#include <stdio.h>

int main() {
    int a = 5;
    int	b = 10;         

    printf("Before swapping %d %d\n", a, b);
    int *tmp = &a;
    
    *tmp = a + b;
    b = a - b;
    *tmp = a - b;

    printf("After swapping %d %d\n", a, b);

    return 0;
}
