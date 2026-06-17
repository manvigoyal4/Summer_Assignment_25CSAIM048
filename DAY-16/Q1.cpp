#include<stdio.h>
int main(){
    //WAP TO FIND MISSING NUMBER IN AN ARRAY.
int arr[100],n,i;
int sum=0,total=0,missing;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n-1;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
total=n*(n+1)/2;
missing=total-sum;
printf("missing number = %d",missing);
return 0;
}