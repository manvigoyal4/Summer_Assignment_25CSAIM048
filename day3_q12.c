#include<stdio.h>
int main(){
    //WAP to find least common multiple.
    int a,b,max,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b; //find the maximmum of a and b
    while(1){
        if(max%a==0 && max%b==0){
            lcm=max;
            break;

        }
        max++;
    }
    printf("the LCM of %d and %d is %d",a,b,lcm);
    return 0;
}