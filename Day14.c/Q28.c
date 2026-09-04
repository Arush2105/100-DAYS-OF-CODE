//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

void main()
{
    int n,product,i;
    printf("Enter the n'th value=");
    scanf("%d",&n);
    product=1;
    for(i=1;i<=n;i++){
        if(i%2==0){
            product=product*i;
        }
    }
    printf("product=%d",product);

}