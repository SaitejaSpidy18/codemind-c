#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=2*a;i>=1;i=i-2)
    {
        printf("%d ",i);
    }
}