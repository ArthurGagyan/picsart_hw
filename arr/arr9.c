#include <stdio.h>

int main(){
	int n = 0;


	scanf("%d", &n);

	float arr[n];

	for(int i = 0; i < n; i++){
		scanf("%f", &arr[i]);
	}
	for(int i = 0; i < n; i++){
		arr[i] = arr[i] / n;
	}

	for(int i = 0; i < n; i++){
		printf("%f\n", arr[i]);
	}


	return 0;
}
