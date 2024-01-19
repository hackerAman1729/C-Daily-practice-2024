#include <stdio.h>


int search(int arr[], int size, int tosearch){
  int low = 0;
  int high = size-1;

  while(low <= high){
    int mid = (low+high)/2;

    if(arr[mid] == tosearch)
      return mid;


    if(arr[mid] < tosearch)
      low = mid+1;
    else
      high = mid-1;

       
  }
  return -1;

}



int main(){
  int arr[5] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  int tosearch = 5;

  int result = search(arr, size, tosearch);

  if(result != -1)
    printf("%d found at index %d\n", tosearch, result);
  else
    printf("%d not found\n", tosearch);

  return 0;
}