#include<stdio.h>
int main()
{
	int i,len=0;
	char str[20];
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		len = len + 1;	
	 } 
	 printf("%d",len);
}