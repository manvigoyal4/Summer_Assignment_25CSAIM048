#include<stdio.h>
int main(){
    //WAP to check the number n is prime or not.
    int n,i,isPrime=1;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        printf("the number is prime");
    }
    else{
        printf("the number is not prime");
    }
    return 0;
}