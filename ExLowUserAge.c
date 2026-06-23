/* The program asks forr the name and the age of the user then it displays them.*/


#include <stdio.h>

int main() {

    char name;
    int age;

    printf("What's your name ? > ");
    scanf("%s", &name);
    printf("What's your age ? > ");
    scanf("%d", &age);

    printf("Welcome %c, you're %d years old", name, age);

    return 0;
}