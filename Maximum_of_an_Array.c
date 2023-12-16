#include<stdio.h>
int main()
{
	int n,m,i;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=1;i<n;i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
	}
	printf("%d",m);
}