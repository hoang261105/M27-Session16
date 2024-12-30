#include<stdio.h>

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

int main() {
    int arr[] = {2, 3, 4, 5, 8}; 
    int n = sizeof(arr) / sizeof(int);

    int value;
    printf("Nhap gia tri tim kiem: ");
    scanf("%d", &value);

    int result = querySearch(arr, 0, n - 1, value);
    if (result != -1) {
        printf("Tim thay phan tu %d o vi tri %d\n", value, result);
    } else {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}

