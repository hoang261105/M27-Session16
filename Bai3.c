#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int swapped = 0;
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped == 0){
			break;
		}
	}
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {3, 4, 2, 8, 5};
	int n = sizeof(arr) / sizeof(int);
	
	bubbleSort(arr, n);
	
	printf("Mang sau khi da sap xep la: \n");
	printArr(arr, n);
	return 0;
}
