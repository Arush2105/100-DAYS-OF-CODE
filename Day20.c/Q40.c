//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;
    int digits=0;

    scanf("%lld", &n);
    long long temp=n;
    while(temp>0){
        digits++;
        temp=temp/10;
    }

    while (n > 0) {
        digit = n % 10;

        digit = 1 - digit;

        result = result + digit * place;
        place = place * 10;

        n = n / 10;
    }
    if(result<place/10){
        printf("%0*lld",digits,result);
    }
    
    else{
        printf("%lld", result);  
    }
    return 0;
}