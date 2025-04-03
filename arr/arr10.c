#include <stdio.h>

int main(){
	int n = 0;
	int mul = 1;

	scanf("%d", &n);

	int arr1[n];
	int arr2[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < n; i++){
                scanf("%d", &arr2[i]);
        }

	for(int i = 0; i < n; i++){
		mul = arr1[i] * arr2[i];
		printf("%d\n", mul);
		mul = 1;
	}

	return 0;
}
