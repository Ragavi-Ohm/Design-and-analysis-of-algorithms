#include<stdio.h>
#include<stdlib.h>
int matrix_mutiply(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2);
int matrix_mutiply(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2)
{
	int c[10][10],i,j,c;
	if(c1==r2)
	{
		for(i=1;i<=r1;i++)
		{
			for(j=1;j<=c2;j++)
			{
				c[i][j]=0;
				for(int k=1;k<=c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		
	}
}
int compute(int n)
{
	int res;
	if(n==1)
	res=1;
	else
	{
		int i,j;
		for()
	}
}
int main()
{
	int n,i,j;
	
}
