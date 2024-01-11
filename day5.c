#include <stdio.h>

int findpower(int num, int power){
  int result = 1;
  if ( power == 0)
    return result;
  return num * findpower(num, power - 1);
    
}


int main(){
  int num, power;
  
  printf("Enter a number: ");
  scanf("%d", &num);
    
  printf("Give me the power to raise it to: ");
  scanf("%d", &power);
  
  printf("The result is %d\n", findpower(num, power));
  return 0;
}

  
