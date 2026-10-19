//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/


#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", second);
    }

    return 0;
}
