#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		   count++;
	}
	if(count==2)
		printf("The number is prime\n");
	else
		printf("The number is not prime number\n");
}
