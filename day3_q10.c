#include<stdio.h>
int main(){
    //WAP to print prime numbers in a range.
    int start,end,i,j,flag;
    printf("enter the start and end of the range:");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        flag=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d ",i);
        }
    }
    return 0;
}