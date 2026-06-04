#include<stdio.h>
int main(){
    //WAP to reverse a number n.
    int n,rev=0,rem;
    printf("enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10; //last digit
        rev=rev*10+rem;
        n=n/10; //remove last digit
    }
    printf("reverse of the number=%d",rev);
    return 0;
}