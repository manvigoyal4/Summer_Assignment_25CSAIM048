#include<stdio.h>
    //WAP to write a function to find sum of two numbers.
    int sum(int a, int b){
        return a+b;
    }
    int main(){
        int x,y,result;
        printf("Enter two numbers: ");
        scanf("%d%d",&x,&y);
        result=sum(x,y);
        printf("Sum = %d",result);
        return 0;
    }
