//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0, lastSpace = -1;

    scanf("%99[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            lastSpace = i;
        }
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
    }

    if (lastSpace != -1) {
        printf(" %s", str + lastSpace + 1);
    } else {
        printf("%s", str);
    }

    return 0;
}
