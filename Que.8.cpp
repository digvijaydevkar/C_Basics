#include<stdio.h>
#include<string.h>
struct book{ 
	char title[20];
	char authername[20];
	int price;
}b[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("book info %d\n",i+1);
		printf("title : ");
		scanf("%s",b[i].title);
		printf("Authername : ");
	    scanf("%s",b[i].authername);
		printf("price :");
		scanf("%d",&b[i].price);
	}
	printf("\nbooks with price in between 500 to 1000");
	for(i=0;i<3;i++)
	{
		if(b[i].price>=500&&b[i].price<=1000)
		   printf("%s\n",b[i].title);
	}
}
