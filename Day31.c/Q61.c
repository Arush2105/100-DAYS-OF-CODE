//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>

void main(){
    int h,i,key;
    int f=-1;

    scanf("%d",&h);
    int a[h];

    for(i=0;i<h;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&key);

    for(i=0;i<h;i++){
        if(a[i]==key){
            f=i;
            break;
        }    
    }
    if(f!=-1){
        printf("Found at index=%d",f);
    }
    else{
        printf("-1");
    }
}