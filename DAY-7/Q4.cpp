#include<stdio.h>
int reverse(int n, int rev)
//WAP to reverse a number using recursion.
{
    if(n==0)
        return rev;
    else
        return reverse(n/10, rev*10 + n%10);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d is %d",n,reverse(n,0));
    return 0;
}