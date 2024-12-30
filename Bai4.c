#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);
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
	
	selectSort(arr, n);
	
	printf("Mang sau khi da sap xep la: \n");
	printArr(arr, n);
	return 0;
}
