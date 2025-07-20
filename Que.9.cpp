#include<stdio.h>
#include<string.h>
int main()
{
	char stra[20];
	char strb[20];
	char strc[20];
	int z,x,flag;
	printf("\n enter your 1st string");
	scanf("%s",stra);
	printf("\nenter your 2nd string");
	scanf("%s",strb);
	printf("\n1): Lenth of string a is %d",strlen(stra));
	printf("\nLenth of string b is %d",strlen(strb));
	flag=strcmp(stra,strb);
	if(flag==0)
	{
		printf("\n 2) two strings are same");
	}
	else 
	{
		printf("\n 2)two strings are not same");
	}
	strcpy(strc,stra);
	printf("\n 3)1st string is %s",strc);
	strcat(stra,strb);
	printf("\n4) joint strings are:%s",stra);
	flag=strcmp(stra,strb);
	if(flag==0)
	{
		printf("\n two strings are same");
	}
	else 
	{
		printf("\n two strings are not same");
	}
	
}
