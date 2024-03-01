// caesar cypher

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryption(char *s, int n){
  int i;
  int len = strlen(s);
  for(i=0; i<len; i++){
    if(isupper(s[i])){
      s[i] = (s[i] - 'A' + n + 26) % 26 + 'A';
    }
    else if(islower(s[i])){
      s[i] = (s[i] - 'a' + n + 26) % 26 + 'a';
    }
  }
}

void decryption(char *s, int n){
  encryption(s, -n);
}

int main(){
  char s[100];
  printf("Give a message: ");
  fgets(s, sizeof(s), stdin);
  int n;
  printf("Give a key: ");
  scanf("%d", &n);
  getchar(); 
  printf("Press e for encryption, d for decryption: ");
  char c = getchar();

  if(c == 'e'){
    encryption(s,n);
    printf("Encrypted string: %s\n", s);
  }
  else if(c == 'd'){
    decryption(s,n);
    printf("Decrypted string: %s\n", s);
  }
  else{
    printf("Invalid input\n");
  }

  return 0;
}
