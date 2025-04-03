#include <stdio.h>

int main() {
    int n;
 
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_i = 0;

    for (int i = 1; i < n; i++){
        if (arr[i] > arr[max_i]){
            max_i = i;
        }
    }

    printf("%d\n", max_i);

    return 0;
}
