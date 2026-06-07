#include<stdio.h>
int main(){
    //WAP to find largest prime factor of a number n.
    int n,i;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
            printf("%d",i);  //optional
            n=n/i;
        }
    }
    printf("\nlargest prime factor=%d",i-1);
    return 0;
}