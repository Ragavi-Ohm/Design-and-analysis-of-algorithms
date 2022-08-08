#include<stdio.h>
#include<stdlib.h>
int recursive(int a[10][10],int b[10][10],n)
{
	int i,j,n,c[10][10],A11[10][10],A12[10][10],A21[10][10],A22[10][10],B11[10][10],B12[10][10],B21[10][10],B22[10][10],C11[10][10];
	if(n==1)
	c[0][0]=a[0][0]*b[0][0];
	else
	{
		for(i=0;i<n/2;i++)
		{
			for(j=0;j<n/2;j++)
			{
				A11[i][j]=a[i][j];
				B11[i][j]=b[i][j];
			}
		}
		for(i=n/2;i<n;i++)
		{
			for(j=n/2;j<n;j++)
			{
				A22[i][j]=a[i][j];
				B22[i][j]=b[i][j];
			}
		}
		for(i=n/2;i<n;i++)
		{
			for(j=0;j<n/2;j++)
			{
				A12[i][j]=a[i][j];
				B12[i][j]=b[i][j];
			}
		}
		for(i=0;i<n/2;i++)
		{
			for(j=n/2;j<n;j++)
			{
				A21[i][j]=a[i][j];
				B21[i][j]=b[i][j];
			}
		}
		C11=recursive(A11,B11,n)+recursive(A12,B21);
		return C11;
	}
}
int main()
{
	int i,j,n,a[10][10]={0,1;1,0},b[10][10]={0,0;0,0},c[10][10],A11[10][10],A12[10][10],A21[10][10],A22[10][10],B[10][10],C[10][10];
	printf("enter the value of dimension:");
	scanf("%d",&n);
	recursive(a,b,2);
	
	
	
	
}
