#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int left = 0;
    int right = size-1;

    while (left <= right) {
        if (arr[left] < 0 && arr[right] < 0) {
            left++; 
        }
        else if (arr[left] >= 0 && arr[right] < 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++; 
            right--; 
        }
        else if (arr[left] >= 0 && arr[right] >= 0) {
            right--; 
        }
        else {
            left++;
            right--; 
        }
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] =  {1,-2,-3,-4,11,7,88,4,-5,-99,0};
    int s = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, s);

    rearrangeArray(arr,s);
    printf("Rearranged array: ");
    printArray(arr,s);

    return 0;
}

