//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

void main()
{
    int y;
    printf("Enter the year=");
    scanf("%d",&y);

    if(y%400==0){
        printf("Is leap year");
    }
    else if(y%100==0){
        printf("Not a leap year");
    }
    else if(y%4==0){
        printf("Is leap year");
    }
    else{
        printf("Not a leap year");
    }
}
