#include<stdio.h>
int main(){
    int u;
    printf("enter unit:");
    scanf("%d",&u);
    int r2=2*u;
    int r1=1*u;
    int r3=3*u;
    if(u<=100){
        
        printf("1 unit = %d rs",r1);
    }
    else if (u<=200){
        printf("2 unit = %d rs",r2);
    }
    else{
        
        printf("3 unit = %d rs",r3);
    }
    return 0;
}