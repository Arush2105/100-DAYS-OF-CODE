//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>

void main(){
    int h,i,temp;
    scanf("%d",&h);

    int a[h];

    for(i=0;i<h;i++){
        scanf("%d",&a[i]);
    }

    int start=0;
    int end=h-1;

    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }

    for(i=0;i<h;i++){
        printf("%d",a[i]);
    }

    
    
}