// all local peak finder 2-D version. after lec-1 of 6.006. it should be greater than all its 4 neighbors. so a peak can't be on the edge.


#include <stdio.h>

void findAllLocalPeaks2D(int rows, int cols, int arr[rows][cols]) {
    for (int i = 1; i < rows-1; i++) {
        for (int j = 1; j < cols-1; j++) {
            int isPeak = 1;
            if (i > 0 && arr[i][j] < arr[i-1][j]) {
                isPeak = 0;
            }
            if (i < rows-1 && arr[i][j] < arr[i+1][j]) {
                isPeak = 0;
            }
            if (j > 0 && arr[i][j] < arr[i][j-1]) {
                isPeak = 0;
            }
            if (j < cols-1 && arr[i][j] < arr[i][j+1]) {
                isPeak = 0;
            }
            if (isPeak) {
                printf("Local peak found at Row: %d, Col: %d\n", i+1, j+1);
            }
        }
    }
}

int main(){
    int n, m;
    printf("give 2D-array row-size: \n");
    scanf("%d", &n);
    printf("give 2D-array col-size: \n");
    scanf("%d", &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("give arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
  for(int i = 0; i < n; i++){
    for(int j =0; j < m; j++){
      printf("%d   ", arr[i][j]);
    }
    printf("\n");
  }
    findAllLocalPeaks2D(n, m, arr);

    return 0;
}
