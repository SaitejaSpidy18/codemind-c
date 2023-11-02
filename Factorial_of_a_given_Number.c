#include<stdio.h>
int main(){
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum = sum*i;
    }
    printf("%d",sum);
}