#include<stdio.h>
int main(){
    float costprice;
    printf("enter cost price:");
    scanf("%f",&costprice);
    float sellingprice;
    printf("enter selling price:");
    scanf("%f",&sellingprice);
    float amt = sellingprice - costprice;
    if (amt>0){
        printf("profit is:%f",amt);
    }
    if(amt==0){
        printf("no profit no loss");
    }
    else{
        printf("loss is:%f",amt);
    }
    return 0;
}