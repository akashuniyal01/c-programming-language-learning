// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the marks:");
//     scanf("%d",&n);
//     if(n>90 && n<=100){
//         printf("EXCELLENT");
//     }
//     else if(n>80 && n<=90){
//         printf("very good");
//     }
//     else if(n>70){
//         printf("GOOD");
//     }
//     else if(n>60 && n<=70){
//         printf("CAN DO BETTER");
//     }
//     else if(n>50 && n<=60){
//         printf("AVERAGE");
//     }
//     else if(n>40 && n<=50){
//         printf("BELOW AVERAGE");
//     }
//     else{
//         printf("FAIL");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the marks:");
//     scanf("%d",&n);
//     if(n>90 && n<=100){
//         printf("EXCELLENT");
//     }
//     else if(n>80){
//         printf("very good");
//     }
//     else if(n>70){
//         printf("GOOD");
//     }
//     else if(n>60){
//         printf("CAN DO BETTER");
//     }
//     else if(n>50){
//         printf("AVERAGE");
//     }
//     else if(n>40){
//         printf("BELOW AVERAGE");
//     }
//     else{
//         printf("FAIL");
//     }
//     return 0;
// }

#include<stdio.h>
int main (){
    int n;
    printf("Enter the marks:");
    scanf("%d",&n);
    if(n>90 && n<=100){
        printf("EXCELLENT");
    }
    if(n>80){
        printf("very good");
    }
    if(n>70){
        printf("GOOD");
    }
    if(n>60){
        printf("CAN DO BETTER");
    }
    if(n>50){
        printf("AVERAGE");
    }
    if(n>40){
        printf("BELOW AVERAGE");
    }
    else{
        printf("FAIL");
    }
    return 0;
}