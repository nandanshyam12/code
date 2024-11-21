#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;  
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  
}

int main() {
    int arr[100], size, key, result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, size, key);

    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

