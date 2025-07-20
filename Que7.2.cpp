#include<stdio.h>
int bin(int n)
{
	if(n==0)
	{
		printf("0");
	}
	else 
	{
	  bin(n/2);
	  printf("%d",n%2);	
	}
}
int main()
{
	int n;
	printf("\nEnter no.");
	scanf("%d",&n);
	bin(n);
}
