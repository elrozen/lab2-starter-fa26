#include <stdio.h>

int contains(int item, int arr[], int size){
	int returnVal = 0;

	for(int i = 0; i < size; i++){
		if (item == arr[i]){
			returnVal = 1;
		}
	}
	
	return returnVal;
}

int main(){
	int arr[] = {2, 9, 2, 0, 2, 5};
	
	printf("Result: %d\n", contains(9, arr, 6));
	return 0;
}
