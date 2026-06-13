#include<stdio.h>
int palin(int n){
    //WAP to write function for palindrome.
    int original = n;
    int reverse = 0;
    while(n > 0){
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    if(original == reverse)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    if(palin(num))
        printf("the number is palindrome\n");
    else
        printf("the number is not palindrome\n");
    return 0;
}