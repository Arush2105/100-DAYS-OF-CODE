//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
void main(){
    int n,s,m,r;
    printf("Enter the value=");
    scanf("%d",&n);
    s=0;
    m=n;

    while(n!=0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==m){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
}