#include<stdio.h>
int main()
{
	int num,sum=0,digit;
	printf("enter an integer: ");
	scanf("%d",&num);
	while(num!=0)
	{
	digit=num%10;
	sum+=digit;
	num/=10;
    }
printf("the sum of the digits : %d\n",sum);
return 0;
}
