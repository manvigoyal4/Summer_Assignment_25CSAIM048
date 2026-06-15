#include<stdio.h>
//WAP TO MOVE ZEROES TO END.
int main(){
    int arr[100],n,i,j=0,temp;
    printf ("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for (i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]!=0)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
}
}
printf("array after moving zeroes:\n");

for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}