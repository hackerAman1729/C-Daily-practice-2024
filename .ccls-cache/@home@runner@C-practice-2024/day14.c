#include <stdio.h>
#include <string.h>


void isPalindrome(char *s){
  int len = strlen(s);
  if (s[len - 1] == '\n') {
      s[len - 1] = '\0'; 
      len--; 
  }
  int i;
  int flag = 1;
  for(i=0; i<len/2; i++){
    if(s[i] != s[len-1-i]){
      printf("Not a palindrome\n");
      flag = 0;
      break;}    
  }
  if(flag)
    printf("Palindrome\n");
  
}

int main(){
  printf("give a sentence: ");
  char s[100];
  fgets(s, sizeof(s), stdin);

  isPalindrome(s);

  return 0;
}