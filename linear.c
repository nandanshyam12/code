#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[100], size, key, result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

