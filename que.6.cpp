#include<stdio.h>
int power(int,int);
 int main()
 {
 	int n,p,x;
 	printf("Enter no. and power");
 	scanf("%d%d",&n,&p);
 	x=power(n,p);
 	printf("\n power is %d",x);
 }
int power(int n,int p)
 {
 	if( p==0)
 	  return 1 ;
 	else
 	 return n*power(n,p-1);
 }
