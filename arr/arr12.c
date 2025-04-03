#include <stdio.h>

int main(){
	const int size = 6;
	char arr[size];
	char tmp = '\0';
	for(int i = 0; i < size; i++){
		scanf(" %c", &arr[i]);	
	}
	
	for(int i = 0; i < size / 2; i++){
		tmp = arr[i];		
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
	
	for(int i = 0; i < size; i++){
		printf("%c\n", arr[i]);
	}	


	return 0;
}
