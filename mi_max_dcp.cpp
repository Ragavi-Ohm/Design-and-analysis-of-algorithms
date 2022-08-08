#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}
int *max_min(int a[100],int x,int y)
{
	static int b[10];
	int min=a[x];
	int max=a[x];
	int c=0;
	for(int i=x;i<=y;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
		else
		c++;
	}

	b[0]=min;
	b[1]=max;
	return b;
}
int main()
{
	int x=0,y,i,j,a[100],b[10],*t,min_nos,max_nos,*p,min1,max1,min2,max2,n;
	printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(int i=0;i<n;i++)
    {
        int num=rand()%100+1;
        //scanf("%d",&num);
        a[i]=num;
        printf("%d\n",num);
    }
    y=n-1;
	if(y-x <=0)
	{
		max_nos=max(a[x],a[y]);
		min_nos=min(a[x],a[y]);
	}
	else
	{
		p=max_min(a,x,(x+y)/2);
		min1=p[0];
		max1=p[1];
		t=max_min(a,(x+y)/2,y);
		min2=t[0];
		max2=t[1];
		min_nos=min(min1,min2);
		max_nos=max(max1,max2);
	}
	printf("min is :%d",min_nos);
	printf("\nmax is :%d",max_nos);
	
}
