#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b =temp;
}

int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = low-1;
  for(int j = low; j<high-1;j++){
    if(arr[j]<=pivot){
      i++;
      swap(&arr[i], &arr[j]);
    
    }
  }
  swap(&arr[i+1], &arr[high]);
  return i+1;
}

void quicksort(int arr[], int low, int high){
  if(low<high){
    int pivotindex = partition(arr, low, high);
    quicksort(arr, low, pivotindex-1);
    quicksort(arr, pivotindex+1, high);
  }
}

int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  for(int i=0; i<n; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  quicksort(arr, 0, n-1);

  printf("Sorted array:\n");

  for(int i=0; i<n; i++){
    printf("%d  ", arr[i]);}

  printf("\n");
}