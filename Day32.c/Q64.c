//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    char number[1000];
    int frequency[10] = {0};
    int i, digit, answer = 0;

    scanf("%s", number);

    for (i = 0; number[i] != '\0'; i++) {
        digit = number[i] - '0';
        frequency[digit]++;
    }

    for (i = 1; i <= 9; i++) {
        if (frequency[i] > frequency[answer]) {
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}
