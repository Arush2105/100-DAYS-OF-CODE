//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

void main()
{
    int n,m,s;
    s=0;
    printf("Enter the value=");
    scanf("%d",&n);
    m=n;
    while(n>0){
        int r=n%10;
        long F=1;;
        for(int i=1;i<=r;i++){
            F*=i;
        }
        s+=F;
        n=n/10;
            
    }

    if(m==s){
        printf("The number is strong ");
    }
    else{
        printf("Number is not strong ");
    }
}