#include<stdio.h>
int sumDigits(int n)
//WAP to find the sum of digits of a number using recursion.
{
    if (n==0)
    return 0;
    else
    return (n%10)+sumDigits(n/10);
    }
    int main(){
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("Sum of digits of %d is %d",n,sumDigits(n));
        return 0;
    }