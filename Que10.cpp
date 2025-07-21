#include<stdio.h>
int lar(int *n1,int *n2)
{
	if(n1>n2)
	  return 1;
	else 
	  return 0;
}
int main()
{
	int n1,n2,c;
	int *p;
	int *s;
	printf("Enter two  numbers ");
	scanf("%d%d",&n1,&n2);
	*p=n1;
	*s=n2;
	c=lar(&n1,&n2);
	if(c)
	  printf("\n %d is larger",p);
	else
	   printf("\n %d is larger",s);
	
}
