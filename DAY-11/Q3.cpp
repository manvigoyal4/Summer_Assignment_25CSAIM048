#include<stdio.h>
//WAP to write a function to check prime.
int isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int x,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    result=isPrime(x);
    if(result==1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}