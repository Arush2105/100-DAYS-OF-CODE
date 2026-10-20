//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/


#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = sum + arr[i][i];
    }

    printf("%d", sum);

    return 0;
}

