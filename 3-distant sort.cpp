#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10]={17, 8, 2, 5, 25, 30, 21, 14, 12},i,j,n=9,c=0,temp;
	if(n<4)
	printf("distant sort not possible");
	for(i=0;i<n;i++)
	{
		if((i+3)>=n)
		break;
		else if(a[i]>a[i+3])
		{
			temp=a[i+3];
			a[i+3]=a[i];
			a[i]=temp;
		}
		else
		c++;
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
