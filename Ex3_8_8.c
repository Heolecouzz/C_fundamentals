/* Create a sequence of number where no number can be the same as its neighboor, and then indicate if that sequence is symetrical 
For example : 12321 -> correct sequence of number
12323 -> incorrect sequence of number
*/

#include <stdio.h>

int verifySequence(int* sequence, int len) {

    int former = sequence[0];

    for (int i = 1; i < len; i++) {
        if (former == sequence[i]) {
            printf("No neighboors can be similar ! ");
            return 0;
        } else {
            former = sequence[i];
        }
    }

    for (int k = 0; k < len/2; k++) {
        if (sequence[k] != sequence[len - k -1]) {
            printf("The sequence isn't symmetrical ! ");
            return 0;
        }
    }
    return 1;
}

int main() {

    int seqlen;

    printf("What's the length of the sequence ? > ");
    scanf("%d", &seqlen);

    if (seqlen % 2 == 0) {
        printf("Your sequence of number will never be correct due to the rules : no number can be the same as its neighboor and have to be symmetrical");
        return 1;
    }

    int sequence[seqlen];
    int number;

    for (int i = 0; i < seqlen; i++) {
        printf("What's your %dst number ? > ", i + 1);
        scanf("%d", &number);
        sequence[i] = number;
    }

    int seqGood = verifySequence(sequence, seqlen);

    if (seqGood) {
        printf("The sequence given respects the rules");
    } else {
        printf("The sentence given doesn't respect the rules");
    }

    return 0;
}