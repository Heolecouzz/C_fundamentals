/* Sum the N first integers. N is given by the user after the launching of the program*/

#include <stdio.h>

int main() {

    int sum = 0;
    int N;

    printf("What is the number given to N ? > ");
    scanf("%d", &N);

    for (int i = 1 ; i <= N; i++) {
        sum += i;
    }

    printf("The result of the first %d integers is %d\n", N, sum);

}