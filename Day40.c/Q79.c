//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


#include <stdio.h>

int main() {
    int r, c, i, j, k;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (k = 0; k < r + c - 1; k++) {
        i = (k < r) ? k : r - 1;
        j = k - i;

        while (i >= 0 && j < c) {
            printf("%d ", arr[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}

