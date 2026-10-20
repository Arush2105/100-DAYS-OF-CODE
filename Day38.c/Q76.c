//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/


#include <stdio.h>

int main() {
    int r, c, i, j, flag = 1;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c) {
        flag = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (arr[i][j] != arr[j][i]) {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0) {
                break;
            }
        }
    }

    if (flag == 1) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

