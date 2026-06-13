#include<stdio.h>
int armstrong(int n){
    int original = n;
    int sum = 0;
    while(n > 0){
        sum += (n % 10) * (n % 10) * (n % 10);
        n = n / 10;
    }
    if(original == sum)
        return 1;
    else
        return 0;
}
int main(){
int num;
printf("enter a number\n");
scanf("%d", &num);
if(armstrong(num))
    printf("the number is armstrong\n");
else
    printf("the number is not armstrong\n");
return 0;
}