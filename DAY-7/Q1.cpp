#include<stdio.h>
int factorial(int n)
//WAP to find the factorial of a number using recursion.
{
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}