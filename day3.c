#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != '*') {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = '*'; 
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
