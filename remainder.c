#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    int q=a/b;
    int r=a-q*b;
    printf("the reaminder when %d is divided by %d is:%d",a,b,r);
    return 0;
}