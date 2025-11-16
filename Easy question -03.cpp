#include<stdio.h>
int main()
{
	int n,t1=0,t2=1,nextterm;
	printf("enter the number of terms: ");
	scanf("%d",&n);
	printf("Fibonaaci series :\t");
	if(n==0)
	{
		printf("no terms to print");
	}
	else if(n==1)
	{
		printf("%d",t1);
	}
	else
	{
		printf("%d","%d",t1,t2);
	}
	for(int i=3;i<=n;i++\n)
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
}

