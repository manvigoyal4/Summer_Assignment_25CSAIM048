#include<stdio.h>
int main(){
    //WAP to check the number n is palindrome or not.
    int n,rev=0,rem,temp;
    printf("enter a number n:");
    scanf("%d",&n);
    temp=n; //store the original number in temp
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    if(temp==rev){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}