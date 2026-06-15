#include<stdio.h>
//WAP TO REVERSE AN ARRAY.
int main(){
int arr[100],n,i;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("reverse array:\n");
for(i=n-1;i>=0;i--)
{
    printf("%d",arr[i]);
}
return 0;
}