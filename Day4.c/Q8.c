//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

void main()
{
    int n,s=0;
    printf("Enter the number of terms you want a sum of=");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf(" sum=%d",s);


}