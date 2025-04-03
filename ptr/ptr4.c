#include <stdio.h>

int main() {
    int *ptr = NULL;
    int num = 4;    


    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    }

    ptr = &num;

    printf("Value of num is %d\n", *ptr);

    return 0;
}
