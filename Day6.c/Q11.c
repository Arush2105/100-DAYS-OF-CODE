//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value that you want to check:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
}