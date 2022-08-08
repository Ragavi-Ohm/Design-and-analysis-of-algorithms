#include<stdio.h>
#include<stdlib.h>
int recursive(int a[10][10],int b[10][10],int n);
int recursive(int a[10][10],int b[10][10],int n)
{
	int c[10][10],m1,m2,m3,m4,m5,m6,m7;
	int i,j,A11[10][10],A12[10][10],A21[10][10],A22[10][10],B11[10][10],B12[10][10],B21[10][10],B22[10][10],C11[10][10],C12[10][10],C21[10][10],C22[10][10];
	if(n==1)
	c[0][0]=a[0][0]*b[0][0];
	else if(n==2)
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
		m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
        m2= (a[1][0] + a[1][1]) * b[0][0];
        m3= a[0][0] * (b[0][1] - b[1][1]);
        m4= a[1][1] * (b[1][0] - b[0][0]);
        m5= (a[0][0] + a[0][1]) * b[1][1];
        m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
        m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 
        c[0][0] = m1 + m4- m5 + m7;
        c[0][1] = m3 + m5;
        c[1][0] = m2 + m4;
        c[1][1] = m1 - m2 + m3 + m6;
	}
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
		C11=recursive(A11,B11,n)+recursive(A12,B21,n);
		C12=recursive(A11,B12,n)+recursive(A12,B22,n);
		C21=recursive(A21,B11,n)+recursive(A22,B21,n);
		C12=recursive(A21,B12,n)+recursive(A22,B22,n);
		return *C;
		
	}
    	
	
}
int main()
{
	int a[10][10], b[10][10], c[10][10], i, j,n,m,p,q;
    
    printf("enter the no of rows of matrix 1:");
    scanf("%d",&n);
    printf("enter the no of coloumns of matrix 1:");
    scanf("%d",&m);
    printf("enter the no of rows of matrix 2:");
    scanf("%d",&p);
    printf("enter the no of coloumns of matrix 2:");
    scanf("%d",&q);
    
    printf("Matrix A has:\n");
    for(i = 0;i < n; i++)
    {
    	for(j = 0;j < m; j++)
    	{
    		int num=rand()%10+1;
    		a[i][j]=num;
    		printf("%d ",a[i][j]);
		}
		printf("\n")
    }
    if(n>m)
    {
    	for(i=n-1;i>=(n-m);i--)
    	{
    		for(j=0;j<n;j++)
    		{
    			a[j][i]=0;
			}
		}
	}
	else
	{
		for(i=m-1;i>=(m-n);i--)
    	{
    		for(j=0;j<m;j++)
    		{
    			a[j][i]=0;
			}
		}
	}
	if(p>q)
    {
    	for(i=p-1;i>=(p-q);i--)
    	{
    		for(j=0;j<p;j++)
    		{
    			a[j][i]=0;
			}
		}
	}
	else
	{
		for(i=q-1;i>=(q-p);i--)
    	{
    		for(j=0;j<q;j++)
    		{
    			a[j][i]=0;
			}
		}
	}
    printf("Matrix B has:\n");
    for(i = 0; i < n; i++)
    {
    	for(j = 0;j < n; j++)
    	{
    		int num=rand()%10+1;
    		b[i][j]=num;
    		printf("%d ",b[i][j]);
		}
	}
      
    printf("\nAfter multiplication using Strassen's algorithm \n");
   for(i = 0; i < n; i++){
      printf("\n");
      for(j = 0;j < n; j++)
           printf("%d\t", c[i][j]);
   }
 
   return 0;
}
