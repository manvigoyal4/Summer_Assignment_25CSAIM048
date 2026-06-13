#include<stdio.h>
//WAP TO COUNT EVEN AND ODD ELEMENTS IN AN ARRAY.
int main(){
    int arr[100], n, i, even = 0, odd = 0;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("number of even elements = %d\n", even);
    printf("number of odd elements = %d\n", odd);
    return 0;
}