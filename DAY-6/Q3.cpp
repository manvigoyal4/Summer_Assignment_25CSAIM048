#include<stdio.h>
int main(){
    //WAP to count set bits in a number n.
    int n,count=0;
    printf("Enter number n: ");
    scanf("%d", &n);
    while(n>0){
        if(n&1)
            count++;
        n=n>>1;
    }
    printf("Number of set bits: %d", count);
    return 0;
}