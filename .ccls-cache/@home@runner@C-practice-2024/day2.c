// matrix multiplication

#include <stdio.h>

int main(){
  int r1, c1, r2, c2;
  printf("Enter the num of rows for first mat: ");
  scanf("%d", &r1);
  printf("Enter the num of cols for first mat: ");
  scanf("%d", &c1);

  printf("Enter the num of rows and cols for second mat: ");
  scanf(" %d %d", &r2, &c2);
  if(c1 != r2){
    printf("Matrix Multiplication is incompatible");
    return 1;
  }

  int mat1[r1][c1];
  int mat2[r2][c2];
  int resultantmat[r1][c2];

  for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
      printf("Enter the element for mat1[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
      printf("Enter the element for mat2[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
      
    }
  

  for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
      resultantmat[i][j] = 0;
    }
  }

  for(int i =0; i<r1; i++){
    for(int j=0; j<c2; j++){
      for(int k=0; k<c1; k++){
        resultantmat[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  
  printf("Resultant matrix: \n");
  for(int i=0; i<r1; i++){
      for(int j=0; j<c2; j++){
        printf("%d  ", resultantmat[i][j]);
      }
    printf("\n");
    }
  
  return 0;
}