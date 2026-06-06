#include<stdio.h>
int main(){
    //WAP to find product of digits of a number n.
    int n,rem,product=1;
    printf("enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10; //last digit
        product=product*rem;
        n=n/10; //remove last digit
    }
    printf("product of digits=%d",product);
    return 0;
}