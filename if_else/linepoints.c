#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("enter coordinates (x1,y1):");
    scanf("%f %f",&x1,&y1);
    printf("enter coordinates (x2,y2):");
    scanf("%f %f",&x2,&y2);
    printf("enter coordinates (x3,y3):");
    scanf("%f %f",&x3,&y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("the points lies on the same line");
    }
    else{
        printf("the points does not lie on the same line");
    }
    return 0;
}