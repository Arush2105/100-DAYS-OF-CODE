//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, first, last, digits, power, result;

    scanf("%d", &n);
    last = n % 10;
    power = 1;
    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    result = n % power;
    result = result / 10;
    result = last * power + result * 10 + first;
    printf("%d", result);

    return 0;
}