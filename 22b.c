#include<stdio.h>
int n;
int i, j;
void selection_sort(int arr[n], int n) {
	for(i = 0; i < n-1; i++) {
		int min = i;
		for (j = i+1; j < n; j++ ){
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	} 
}
void display(int arr[n], int n) {
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
void main() {
	printf("enter size of array");
	scanf("%d", &n);
	int arr[n];
	printf("enter elements in the array");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	selection_sort(arr, n);
	display(arr, n);
}
