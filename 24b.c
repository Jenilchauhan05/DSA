#include<stdio.h>
int i, j, n;

void quick_sort(int arr[], int lb, int ub) {
	int flag = 1;
	if (lb < ub) {
		int i = lb;
		int j = ub + 1;
		int key = arr[lb];
		
		while (flag == 1) {
		i++;
		while(arr[i] < key) {
			i++;
		}
		j--;
		while(arr[j] > key) {
			j--;
		}
		if (i < j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else {
			flag = 0;
		}
	}
	int temp = arr[lb];
	arr[lb] = arr[j];
	arr[j] = temp;
	quick_sort(arr, lb, j-1);
	quick_sort(arr, j+1, ub);
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
	quick_sort(arr, 0, n);
	display(arr, n);
}
