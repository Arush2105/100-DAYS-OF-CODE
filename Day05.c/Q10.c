//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

void main()
{
    int t,m,h,s;
    printf("Enter the time in seconds=");
    scanf("%d",&t);
    h=t/3600;
    m=(t%3600)/60;
    s=t%60;
    printf("hours=%d,minutes=%d,seconds=%d",h,m,s);
}
