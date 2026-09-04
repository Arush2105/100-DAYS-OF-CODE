//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

void main()
{
    int n,rev,d;
    printf("Enter the value=");
    scanf("%d",&n);
    rev=0;

    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reversed number=%d",rev);
}