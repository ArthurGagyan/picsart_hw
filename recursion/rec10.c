#include <stdio.h>

int findMin(int arr[], int size){
	if(size == 1) {
        	return arr[0];
   	 }

   
	int min = findMin(arr, size - 1);

   
	if(arr[size - 1] < min){
		return arr[size - 1];
	}else{
		return min;
	}
}

int main(){
	int arr[] = {3, -5, 34, 9, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	int min = findMin(arr, size);

	printf("%d\n", min);

	return 0;
}
