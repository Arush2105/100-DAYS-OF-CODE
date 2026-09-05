//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
void main()
{
    int n,s,r;
    printf("Enter the value=");
    scanf("%d",&n);
    s=0;
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("sum=%d",s);

}