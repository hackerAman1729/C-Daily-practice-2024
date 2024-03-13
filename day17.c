// Vigenère Cipher

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *str, char *key) {
    int strLen = strlen(str);
    int keyLen = strlen(key);
    char result[100];

    for (int i = 0, j = 0; i < strLen; i++, j++) {
        if (j == keyLen) j = 0;

        char keyShift = tolower(key[j]) - 'a';

        if (str[i] >= 'a' && str[i] <= 'z') {
            result[i] = ((str[i] - 'a' + keyShift) % 26) + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = ((str[i] - 'A' + keyShift) % 26) + 'A';
        } else {
            result[i] = str[i];
            j--; 
        }
    }
    result[strLen] = '\0';

    printf("%s\n", result);
}

void removeNewline(char* string) {
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0'; 
    }
}

int main() {
    char str[100];
    printf("Give me a string: \n");
    fgets(str, sizeof(str), stdin);
    removeNewline(str); 

    char key[50];
    printf("Give a key: \n");
    fgets(key, sizeof(key), stdin);
    removeNewline(key); 

    for (int i = 0; key[i] != '\0'; i++) {
        key[i] = tolower(key[i]); 
    }

    encrypt(str, key);
    return 0;
}
