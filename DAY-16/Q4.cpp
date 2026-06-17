#include<stdio.h>
int main(){
    //WAP TO REMOVE DUPLICATES FROM ARRAY.
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates: ");

    for(i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
