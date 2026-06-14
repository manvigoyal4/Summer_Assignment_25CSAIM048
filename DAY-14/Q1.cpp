#include<stdio.h>
//WAP TO LINEAR SEARCH.
int main(){
    int arr[10],i,n,key,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d",i+1);
    }
    else{
        printf("Element not found");
    }
    return 0;
}