#include<stdio.h>
int main(){
    //WAP to print repeated character pattern.
    int i,j,n;
    char ch='A';
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}