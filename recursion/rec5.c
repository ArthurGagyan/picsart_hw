#include <stdio.h>

void print_arr(int arr[], int size, int index){
	if(index >= size) return;               
	printf("%d ", arr[index]);               
	print_arr(arr, size, index + 1); 
}

int main(){
	int arr[] = {10, 20, 30, 40, 50};
    	int size = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, size, 0);
	printf("\n");

  	 return 0;
}

