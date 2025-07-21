#include<stdio.h>
int ave(int);
int main()
{
	int sum=0,z, i,n;
	for(i=0;i<10;i++)
	{
		printf("\n Enter no.");
		scanf("%d",&n);
		sum=sum+n;
	}
	z=ave(sum);
	printf("sum is %d and average is %d",sum,z);
	
}
int ave(int sum)
{ 
   int ave;
   ave=sum/10;	
}
