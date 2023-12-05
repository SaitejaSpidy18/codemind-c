#include<stdio.h>
int main(){
	int i,q,c=0;
	scanf("%d",&q);
	for(i=1;i<=q;i=i+1)
	{
		if(q%i==0)
	{
		c=c+1;
}

}
if(c==2)
printf("Prime");
else
printf("Not Prime");
}