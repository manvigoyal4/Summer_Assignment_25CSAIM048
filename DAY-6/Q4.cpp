#include<stdio.h>
int main(){
    //WAP to find x^n without pow().
    int x,n;
    long long result=1;
    printf("Enter base x: ");
    scanf("%d",&x);
    printf("Enter power n: ");
    scanf("%d",&n);
    while(n>0){
        result=result*x;
        n--;
    }
    printf("Result: %lld", result);
    return 0;
}