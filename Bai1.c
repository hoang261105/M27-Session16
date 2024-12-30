#include<stdio.h>

int searchValue(int arr[], int n, int value){
	for(int i=0; i<n; i++){
		if(arr[i] == value){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {3, 4, 2, 8, 5};
	int n = sizeof(arr) / sizeof(int);
	
	int value;
	printf("Nhap gia tri tim kiem: ");
	scanf("%d", &value);
	
	int result = searchValue(arr, n, value);
	if(result != -1){
		printf("Tim thay phan tu %d o vi tri %d", value, result);
	}else{
		printf("Khong tim thay phan tu");
	}
	return 0;
}
