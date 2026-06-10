#include<stdio.h>
    //WAP to write a function to find factorial of a number.
    int factorial(int n){
        if(n==0)
            return 1;
        else
            return n*factorial(n-1);
    }
    int main(){
        int x,result;
        printf("Enter a number: ");
        scanf("%d",&x);
        result=factorial(x);
        printf("Factorial = %d",result);
        return 0;
    }
