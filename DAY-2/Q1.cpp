#include<stdio.h>
int main (){
    //WAP to find the sum of digits of a numbern.
    int n,sum=0,rem;
    printf("enter a number n:");
    scanf("%d",&n);
while(n!=0){
    rem=n%10; //last digit
    sum=sum+rem;
    n=n/10; //remove last digit
} 
printf("sum of digits=%d",sum);
return 0;
}