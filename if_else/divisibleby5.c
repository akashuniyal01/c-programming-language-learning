#include<stdio.h>
int main(){
    int n;
    printf("enter a integer:");
    scanf("%d",&n);
    if(n%5==0){
        printf("yes, the integer %d is divisible by 5",n);
    }
    else{
        printf("No, the integer %d is not divisible by 5",n);
    }
    return 0;
}