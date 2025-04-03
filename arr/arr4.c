#include <stdio.h>

int main() {
    int n;
 
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min_i = 0;

    for (int i = 1; i < n; i++){
        if (arr[i] < arr[min_i]){
            min_i = i;
        }
    }

    printf("%d\n", min_i);

    return 0;
}
