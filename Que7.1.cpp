#include<stdio.h>
int fact(int n);
int main()
{
	int n,y;
	printf("Enter the no.");
	scanf("%d",&n);
	y=fact(n);
	printf("fact.of no. is %d",y);
}
int fact(int n)
{
	if(n==1)
	 return 1;
	else
	return n*fact(n-1);
}
