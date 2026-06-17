#include<stdio.h>
int main(){
    //WAP TO FIND PAIR WITH GIVEN SUM.
    int arr[100], n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d %d", arr[i], arr[j]);
            }
        }
    }

    return 0;
}