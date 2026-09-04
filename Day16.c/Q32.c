//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

void main()
{
    int m,n,s,r;
    printf("Enter the value=");
    scanf("%d",&n);
    m=n;
    s=0;

    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==m){
        printf("Number is pallindrome");
    } 
    else{
        printf("not pallindrome");
    }
}