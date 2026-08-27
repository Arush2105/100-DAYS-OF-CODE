//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

void main()
{
    double p,r,t,SI,CI;
    printf("Enter the principle=");
    scanf("%lf",&p);
    printf("Enter the rate of interest=");
    scanf("%lf",&r);
    printf("Enter the time duration=");
    scanf("%lf",&t);
    
    SI=(p*r*t)/100.0;
    CI=p*pow((1+r/100.0),t)-p;
    printf("The simple interest=%.2lf\n",SI);
    printf("The compound interest=%.2lf\n",CI);
}