// peak finder 1-D version. after lec-1 of 6.006

#include <stdio.h>
#include <stdlib.h> 

void findAllLocalPeaks(int *arr, int n) {
    int *arr2 = (int *)malloc(n * sizeof(int));

  int size = 0;
  for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
      size++;
      arr2 = realloc(arr2, size * sizeof(int));
      arr2[size-1] = i;
    }
  }
  printf("Local peak indices: ");
  for(int i=0; i<size; i++)
    printf("%d ", arr2[i]);

  printf("\n");
  free(arr2);
}

int main(){
  int n;
  printf("give array size: ");
  scanf( "%d", &n);
  int arr[n];
  for(int i=0; i<n; i++){
    printf("give arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  findAllLocalPeaks(arr, n);

  return 0;
}