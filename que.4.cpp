#include<stdio.h>
void area1(float h,float b);
void area2(float r);
void area3(float l,float w);
 
int main()
{
	int n;
	float r,h,b,l,w;
	printf("What do you want to find ?\n 1.Area of triangle. \n 2. Area of circle.");
	printf("\n 3.Area of rectangle");
	scanf("%d",&n);
	if(n==1)
	   area1(h,b);
	else
	{
	   if(n==2) 
	    area2(r);
	   else
	   {
	   	if(n==3)
	   	 area3(l,w);
	   	else
	   	 printf("Invalid no.");
	   }	 
	} 	    
}
void area1(float h,float b)
{
	float area;
	
	printf("\nenter value of h and b ");
	scanf("%f%f",&h,&b);
	area=0.5*h*b;
	printf("\narea of triangle is %f,area");
}
void area2(float r)//circle
{
	float area;
	printf("\nEnter radius of circle ");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("\nArea of circle is %f",area);
}
void area3(float l, float w)
{
    float area;
    printf("\nenter vlaue of l and w");
    scanf("%f%f",&l,&w);
    area=l*w;
    printf("Area of rectangle is %f",area);
}
	
	
