#include<stdio.h>
#include <string.h>
int main()
{
	int i,y,v=0,c=0;
	char a[20];
	printf("Enter the string");
	scanf("%s",a);
	y=strlen(a);
	
	for(i=0;i<y;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		   v++;
	    else
	       c++;
	}
	printf("no of vowel=%d\nno of consonant=%d\n length of string is=%d",v,c,y);
}


