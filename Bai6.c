#include<stdio.h>
#include<stdlib.h>

void insertSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j = i - 1;
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}

int searchValue(int arr[], int n, int value){
	for(int i=0; i<n; i++){
		if(arr[i] == value){
			return i;
		}
	}
	return -1;
}

int querySearch(int arr[], int low, int high, int value) {
    if (low > high) {
        return -1; 
    }

    int mid = (low + high) / 2;

    if (arr[mid] == value) {
        return mid; 
    } else if (arr[mid] > value) {
        return querySearch(arr, low, mid - 1, value); 
    } else {
        return querySearch(arr, mid + 1, high, value); 
    }
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main(){
	int n, value;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	do{
		printf("------------------MENU-------------------\n");
		printf("1. Sap xep chen\n");
		printf("2. Tim kiem tuyen tinh\n");
		printf("3. Tim kiem nhi phan\n");
		printf("0. Thoat\n");
		printf("Moi ban chon: ");
		
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insertSort(arr, n);
				printf("Mang sau khi sap xep: \n");
				printArr(arr, n);
				break;
			case 2:
				printf("Nhap gia tri tim kiem: ");
				scanf("%d", &value);
				int result = searchValue(arr, n, value);
				if(result != -1){
					printf("Tim thay phan tu %d o vi tri %d\n", value, result);
				}else{
					printf("Khong tim thay phan tu\n");
				}
				break;
			case 3:
				insertSort(arr, n);
				printf("Mang sau khi sap xep: \n");
				printArr(arr, n);
				printf("Nhap gia tri tim kiem: ");
				scanf("%d", &value);
				int result1 = querySearch(arr, 0, n-1, value);
				if(result1 != -1){
					printf("Tim thay phan tu %d o vi tri %d\n", value, result1);
				}else{
					printf("Khong tim thay phan tu\n");
				}
				break;
			case 0:
				exit(0);
			default:
				printf("Vui long nhap lai!");
		}
	}while(1==1);
}
