/* Everything is within the name !*/

#include <stdio.h>
#include <string.h>

char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void encrypt(char* string, int len, int shift) {

    int index;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (string[i] == alphabet[j]) {
                index = j;
            }
        }
        string[i] = alphabet[(index + shift) % 26];
    }
    printf("\n%s", string);
}

void decrypt(char* string, int len, int shift) {
    
    int index;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (string[i] == alphabet[j]) {
                index = j;
            }
        }
        string[i] = alphabet[(index - shift) % 26];
    }
    printf("\n%s", string);
}



int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("Give only one argument ! > ./a.out <string>");
        return 1;
    }

    int number, choice, lenchar;

    lenchar = strlen(argv[1]);

    printf("Do you want to encrypt (0) or decrypt (1) the code > ");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("What is the shift to encrypt the code thanks to Ceasar Cipher ? > ");
        scanf("%d", &number);
        encrypt(argv[1], lenchar, number);
    } else {
        printf("What is the shift to decrypt the code thanks to Ceasar Cipher ? > ");
        scanf("%d", &number);
        decrypt(argv[1], lenchar, number);
    }

    return 0;
}