#include <stdio.h>

int main(){
	int n = 0;
	int sum = 0;
	int mul = 1;


	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++){
		sum += arr[i];
		mul *= arr[i];
	}

	printf("%d\n", sum);
	printf("%d\n", mul);

	return 0;
}
