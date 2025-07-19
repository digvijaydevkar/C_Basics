#include <stdio.h>
int main()
{
	int a[100],n,i,j=0,k=0,l=0,sum=0,b[100],c[100],m=0,p=0,w=0,temp;
	printf("enter size of array ");
	scanf("%d",&n);
	printf("enter elemnts of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("1)  IN ORDER ");
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n2)  IN REVERSE ORDER :");
    for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n3) sum of elementys is : %d",sum);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		 b[j]=a[i];
		 j++;
		 m++;
		}
		else
		{
		 c[k]=a[i];
		 k++;
		 p++;
		}
    }
    printf("\n4)  b: EVEN ARRAY \n");
    for(j=0;j<m;j++)
    {
    	printf("b[%d]=%d\n",j,b[j]);
	}
	printf("\nc: ODD ARRAY\n");
	for(k=0;k<p;k++)
    {
    	printf("c[%d]=%d\n",k,c[k]);
	}
	for(i=0;i<n;i++)
	{
		for(l=i+1;l<n;l++)
		{
			if(a[i]>a[l])
			{
				temp=a[i];
				a[i]=a[l];
				a[l]=temp;
			}
		}
	}	printf(" \n5) no. of repeating elements are :");
	
		for(i=0;i<n;i++)
	{
		for(l=i+1;l<n;l++)
		{
			if(a[i]==a[l])
			{
			w++;
			}
		}
	} printf("%d",w);
	printf(" \n6) asending order");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		for(i=0;i<n;i++)
	{
		for(l=i+1;l<n;l++)
		{
			if(a[i]<a[l])
			{
				temp=a[i];
				a[i]=a[l];
				a[l]=temp;
			}
		}
	}
	printf(" \n7) Desending order");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
