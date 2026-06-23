/* We want to see if the word given by the user is a palindrome or not !*/

#include <stdio.h>
#include <string.h>

int Palindrome(char* word, int len) {

    int iterations = len / 2;

    for (int i = 0; i < iterations; i++) {
        if (word[i] != word[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        perror("It only accepts 1 word !");
    }

    int len = strlen(argv[1]);
    
    int result = 0;

    result = Palindrome(argv[1], len);

    if (result) {
        printf("The word %s is a palindrome", argv[1]);
    } else {
        printf("The word %s isn't a palindrome", argv[1]);
    }
}