//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the three numbers using comma between each of them=");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a>b&&c>b){
        if(a>c){
            printf("%d is the largest among",a);
        }
        else{
            printf("%d is the largest among",c);
        }
    }
    else if(a>c&&b>c){
        if(b>a){
            printf("%d is the largest among",b);
        }
        else{
            printf("%d is the largest among",a);
        }
    }
    else{
        if(c>b){
            printf("%d is the largest among",c);   
        }
        else{
            printf("%d is the largest among",b);
        }
    }
}
