//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

void main(){
    int i,h;
    scanf("%d",&h);
    int a[h];

    for(i=0;i<h;i++){
        scanf("%d",&a[i]);
    }

    int p=0,n=0,z=0;

    for(i=0;i<h;i++){
        if(a[i]>0){
            p=p+1;
        }
        else if(a[i]<0){
            n=n+1;
        }
        else{
            z=z+1;
        }
    }
    printf("Positive=%d,Negative=%d,Zero=%d",p,n,z);
}