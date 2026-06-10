#include<stdio.h>
int main(){
    //WAP to print reverse number triangle.
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}