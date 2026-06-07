#include<stdio.h>
int main(){
    //WAP to check strong number.
    int n,temp,digit,sum=0,fact,i;
    printf("enter a number n:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}