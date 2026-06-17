#include<stdio.h>
int main(){
    //WAP TO FIND MAXIMUM FREQUENCY ELEMENT.
    int arr[100],n,i,j;
    int count, maxcount=0, element;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
{
    count=1;
    for (j=i+1;j<n;j++){
        if(arr[i]==arr[j])
{
    count++;
}
    }
    if(count > maxcount)
    {
        maxcount=count;
        element=arr[i];
    }
}
printf("maximum frequency element=%d",element);
return 0;
}  