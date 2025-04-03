#include <stdio.h>

int main(){
	const int size = 6;
	char arr[size];
	int sum = 0;

	for(int i = 0; i < size; i++){
		scanf(" %c", &arr[i]);
	}

	for(int i = 0; i < size / 2; i++){
		if(arr[i] == arr[size - 1 - i]){
			sum ++;
		}
	}

	if(sum == size/2){
		printf("polindrom\n");
	}
	else{
		printf("no\n");
	}

	return 0;
}
