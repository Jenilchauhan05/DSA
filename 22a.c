#include<stdio.h>
int n;
int i, j;
void bubble_sort(int arr[n], int n) {
	int last = n-1;
	for (i = 0; i < n-1; i++) {
		int exchng = 0;
		for (j = 0; j < last; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				exchng++;
			}
		}
		if (exchng == 0) {
			printf("array is sort");
			return;
		}
		else {
			last--;
			return;
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
	bubble_sort(arr, n);
	display(arr, n);
}
