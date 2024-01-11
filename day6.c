// find prime using erasotothenes sieve. find prime till n

#include <stdio.h>
#include <stdbool.h>

int main(){
  int n;
  printf("Enter a number upto which you want to find prime numbers: ");
  scanf("%d", &n);

  bool primenos[n+1];
  for(int i=2; i<=n; ++i){
    primenos[i] = true;
  }

  for(int i=2; i*i<=n; ++i){
    if(primenos[i] == true){
      for(int j=i*i; j<=n; j+=i)
        primenos[j] = false;
      
    }
  }
  printf("The primes till %d are: \n", n);
  int count = 0;
  for(int i=2; i<=n; ++i){
    if(primenos[i] == true){
      printf("%d ", i);
      count++;
    }
  }
  printf("\nThere are %d primes till %d\n", count, n);
  

  return 0;
  }

  
