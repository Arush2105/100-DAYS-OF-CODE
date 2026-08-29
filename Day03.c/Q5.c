//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

void main()
{
    float t;
    printf("Enter the temperater in Celsius");
    scanf("%f",&t);
    printf("temperature in Fahrenheit=%.2f",(t*1.8)+32);
}
