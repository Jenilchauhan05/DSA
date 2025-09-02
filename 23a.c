#include <stdio.h>
int i, j, n;
void insertion_Sort(int arr[], int n) {
    for ( i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void display(int arr[], int n) {
    for (
	i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void main() {
	printf("enter size of array");
	scanf("%d", &n);
	int arr[n];
	printf("enter elements in the array");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	insertion_Sort(arr, n);
	display(arr, n);
}
