#include<stdio.h>
int main()
{
	int a[20][20];
	int r,c,i,j,sum=0;
	printf("enter size of r and c");
	scanf("%d%d",&r,&c);
	printf("\nEnter elements of matix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		if(i==j)
		   sum=sum+a[i][j];
	    }
	}
	printf("\nInputed marix is:");
	for(i=0;i<r;i++)
	{printf("\n");
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
	    }
	}
	printf("\nlower triangular marix is:");
	for(i=0;i<r;i++)
	{printf("\n");
		for(j=0;j<c;j++)
		{
			if(i<j)
			a[i][j]=0;
		printf("%d ",a[i][j]);
	    }
	}
	printf("\nsum of all diagonals is  %d",sum);
}
