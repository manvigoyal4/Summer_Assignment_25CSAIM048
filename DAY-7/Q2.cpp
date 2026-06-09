#include<stdio.h>
int fib(int n)
//WAP to print fibonacci series up to n terms using recursion.
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("Fibonacci series: ");
    for(int i=0;i<num;i++){
        printf("%d ",fib(i));
    }
    return 0;
}