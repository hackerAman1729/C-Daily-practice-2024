#include <stdio.h>
#include <stdlib.h>


void increase_capacity(int **arr, int *capacity){
  int *temp = (int *)malloc(sizeof(int) * (*capacity) * 2);
  for(int i=0; i<*capacity; i++)
    temp[i] = (*arr)[i];
  free(*arr);
  *arr = temp;
  *capacity *= 2;
  }


void add_elem(int **arr, int *size, int *capacity, int elem){
  if(*size == *capacity)
    increase_capacity(arr, capacity);
  (*arr)[*size] = elem;
  (*size)++;
    
  }

void print_arr(int *arr, int size){
  for(int i=0; i<size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");
     
}

int main(){
  int capacity = 5;
  int size =0;

  int *arr = (int *)malloc(sizeof(int)*capacity);

  for(int i=1; i<=10;i++)
    add_elem(&arr, &size, &capacity, i);

  print_arr(arr, size);

  free(arr);

  
return 0;
  
}