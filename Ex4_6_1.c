/* Recreate the char *strdup(char *ch_src) function. It copies to a new memory location and returns its memory address */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Renamed to 'my_strdup' to avoid conflicts
// 2. Changed return type to char*
char* my_strdup(const char* string) {
    
    int len = strlen(string);

    // 3. Added +1 to account for the null terminator '\0'
    char* newString = malloc((len + 1) * sizeof(char));

    // Always check if malloc succeeded
    if (newString == NULL) {
        return NULL;
    }

    // 4. Copy the entire string over
    strcpy(newString, string);

    // 5. Use %p to print memory addresses
    printf("Address of original string: %p\n", &string);
    printf("Address of new duplicated string: %p\n", &newString);

    // 6. Return the pointer, not the address of the local variable
    return newString;
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("We need one argument!\n");
        return 1;
    }

    // 7. Changed to char* to match the function return type
    char* duplicated_str;

    duplicated_str = my_strdup(argv[1]);

    if (duplicated_str != NULL) {
        printf("The copied string is: %s\n", duplicated_str);
        
        // 8. Always free memory that you allocated with malloc!
        free(duplicated_str);
    }

    return 0;
}