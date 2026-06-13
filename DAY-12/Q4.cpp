#include<stdio.h>
//PERFECT NUMBER FUNCTION.
int perfect(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    if(perfect(num))
        printf("the number is perfect\n");
    else
        printf("the number is not perfect\n");
    return 0;
}