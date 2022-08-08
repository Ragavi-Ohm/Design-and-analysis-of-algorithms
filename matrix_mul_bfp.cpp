#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int x[10][10],y[10][10],z[10][10];
	int i,j,sum=0,n,m,p,q;
	printf("enter the no of rows of matrix 1:");
    scanf("%d",&n);
    printf("enter the no of coloumns of matrix 1:");
    scanf("%d",&m);
    printf("enter the no of rows of matrix 2:");
    scanf("%d",&p);
    printf("enter the no of coloumns of matrix 2:");
    scanf("%d",&q);
    printf("Matrix A initially was:\n");
    for(i = 0;i < n; i++)
    {
    	for(j = 0;j < m; j++)
    	{
    		int num=rand()%10+1;
    		x[i][j]=num;
    		printf("%d ",x[i][j]);
		}
		printf("\n");
    }
    if(n>m)
    {
    	for(i=n-1;i>=m;i--)
    	{
    		for(j=0;j<n;j++)
    		{
    			x[j][i]=0;
			}
		}
	}
	else
	{
		for(i=m-1;i>=n;i--)
    	{
    		for(j=0;j<m;j++)
    		{
    			x[j][i]=0;
			}
		}
	}
	printf("Matrix A has:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",x[i][j]);

		}
		printf("\n");
	}
	if(p>q)
    {
    	for(i=p-1;i>=q;i--)
    	{
    		for(j=0;j<p;j++)
    		{
    			y[j][i]=0;
			}
		}
	}
	else
	{
		for(i=q-1;i>=p;i--)
    	{
    		for(j=0;j<q;j++)
    		{
    			y[j][i]=0;
			}
		}
	}
	printf("Matrix B initially was:\n");
    for(i = 0; i < p; i++)
    {
    	for(j = 0;j < q; j++)
    	{
    		int num=rand()%10+1;
    		y[i][j]=num;
    		printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B has:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d  ",y[i][j]);

		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			for(j=0;j<n;j++)
		    {
		    	sum=sum+x[i][j]*y[j][k];
		    }
		z[i][k]=sum;
		sum=0;
		}
	}
	printf("\n\nAfter multiplication using Strassen's algorithm \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",z[i][j]);

		}
		printf("\n");
	}
	
}
