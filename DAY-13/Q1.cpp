#include<stdio.h>
//WAP TO INPUT AND DISPLAY ARRAY
int main(){
    int arr[100], n, i;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("the elements are\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}