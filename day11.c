#include <stdio.h>

void merger(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        arr3[k++] = arr1[i++];
    }

    while (j < size2) {
        arr3[k++] = arr2[j++];
    }
}


int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1 + size2];  

    merger(arr1, size1, arr2, size2, arr3);

    printf("Merged:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}
