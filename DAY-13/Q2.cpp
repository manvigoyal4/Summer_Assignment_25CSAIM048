#include<stdio.h>
//FIND SUM AND AVERAGE OF ARRAY.
int main(){
    int arr[100], n, i, sum = 0;
    float average;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("sum = %d\n", sum);
    printf("average = %.2f\n", average);
    return 0;
}