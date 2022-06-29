#include<stdio.h>
int isitprime(int n)
{
	int i,fc=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	if(fc==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int s,e,i;
	scanf("%d",&s);
	scanf("%d",&e);
	for(i=s;i<=e;i++)
	{
		if(isitprime(i)==1)
		{
			printf("%d
",i);
		}
	}
	return 0;
}