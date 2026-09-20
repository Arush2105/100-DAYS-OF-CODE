//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>

void main(){
    int i,h,s;
    s=0;
    scanf("%d",&h);
    int a[h];
    for(i=0;i<h;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<h;i++){
        s=s+a[i];
    }
    printf("%d",s);
}