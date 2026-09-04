//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

void main()
{
    int n,b,p,r;
    printf("Enter the value=");
    scanf("%d",&n);
    p=1;
    b=0;
    while(n>0){
        r=n%2;
        b=b+r*p;
        p=p*10;
        n=n/2;
    }
    printf("binary representation=%d",b);
}