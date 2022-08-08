#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *max(char a[20],char b[20])
{
	if(strcmp(a,b)>0)
	return a;
	else
	return b;
}
char *min(char a[20],char b[20])
{
	if(strcmp(a,b)<0)
	return a;
	else
	return b;
}
char *max_min(char a[20][20],int x,int y)
{
	static char b[10][10];
	char min[20],max[20];
	strcpy(min,a[x]);
	strcpy(max,a[x]);
	int c=0;
	for(int i=x;i<=y;i++)
	{
		if(strcmp(min,a[i])>0)
		strcpy(min,a[i]);
		if(strcmp(max,a[i])<0)
		strcpy(max,a[i]);
		else
		c++;
	}

	strcpy(b[0],min);
	strcpy(b[1],max);
	return *b;
}
main()
{
	int x=0,y,i,j,n;
	char a[20][20],b[10][10],*t,min_nos[10],max_nos[10],*p,min1[10],max1[10],min2[10],max2[10],s[10];
	printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the strings:");
    for(int i=0;i<n;i++)
    {
        //int num=rand()%100+1;
        scanf("%s",&s);
        strcpy(a[i],s);
       
    }
    y=n-1;
	if(y-x <=0)
	{
		strcpy(max_nos,max(a[x],a[y]));
		strcpy(min_nos,min(a[x],a[y]));
	}
	else
	{
		strcpy(p,max_min(a,x,(x+y)/2));
		printf("%p",*p);
		strcpy(min1,p);
		strcpy(max1,p+1);
		strcpy(t,max_min(a,(x+y)/2,y));
		strcpy(min2,t);
		strcpy(max2,t+1);
		strcpy(min_nos,min(min1,min2));
		strcpy(max_nos,max(max1,max2));
	}
	printf("min is :%s",min_nos);
	printf("\nmax is :%s",max_nos);
	
}
