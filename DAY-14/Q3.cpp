#include<stdio.h>
//WAP TO FIND SECOND LARGEST ELEMENT.
int main(){
    int arr[10],i,n,largest,second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    second_largest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("Second largest element is %d",second_largest);
    return 0;
}