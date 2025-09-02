#include <stdio.h>
int linearSearch(int arr[], int n, int x) {
	int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;  
    }
    return -1;  
}

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid; 
        else if (arr[mid] < x)
            low = mid + 1;  
        else
            high = mid - 1; 
    }
    return -1; 
}

int main(){
	int n;
	printf("Enter Size of An Array");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter arr[%d]",i);
		scanf("%d",&arr[i]);	
	}
	printf("Array:-");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);	
	}
	
//	--------------For Searching----------

    int choice, x, result;
    printf("\nChoose Search Method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (requires sorted array)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter element to search: ");
    scanf("%d", &x);

    if (choice == 1) {
        result = linearSearch(arr, n, x);
    } else if (choice == 2) {
        result = binarySearch(arr, 0, n - 1, x);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
} 



