#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
        printf("the number is divisible by 3 and 5 but  not divisible by 15 ");
        }
        else{
            prin tf("not");
        }
    }
    else{
        printf("the number is not divisible by 3 and 5");
    }
    return 0;
}