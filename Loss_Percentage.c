#include<stdio.h>
int main(){
    float cp,sp,loss;
    scanf("%f%f",&cp,&sp);
    loss = (cp-sp)*100/cp;
    printf("%.2f",loss);
}