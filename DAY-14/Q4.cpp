#include<stdio.h>
//WAP TO FIND DUPLICATES IN AN ARRAY.
int main(){
    int arr[10],i,j,n,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("No duplicates found");
    }
    return 0;
}