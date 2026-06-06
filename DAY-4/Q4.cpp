#include<stdio.h>
#include<math.h>
int main(){
    //WAP to print armstrong numbers in a range.
int start,end;
printf("enter start: ");
scanf("%d",&start);
printf("enter end: ");
scanf("%d",&end);
for(int n=start;n<=end;n++){
    int original=n,remainder,result=0,digits=0;
    // count digits.
    while(original!=0){
        original/=10;
        digits++;
    }
original=n;
// check armstrong.
while(original!=0){
    remainder=original%10;
    result+=pow(remainder,digits);
    original/=10;
}
if(result==n)
    printf("%d ",n);

}return 0; }

