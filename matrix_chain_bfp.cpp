#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Given 3 matrices A1(10x100),A2(100x5),A3(5x50)--->l=10,m=100,n=5,p=50;
	//brute force approach: compute (A1)(A2A3) and (A1A2)A3, the computation which has minimum cost or scalar mutiplications is the result.
	//for (A1)(A2A3)
	int res1,res2,l=10,m=100,n=5,p=50;
	res1=m*n*p+l*m*p;
	res2=l*m*n+l*n*p;
	if(res1<res2)
	printf("the paranthesisation that has minimum cost is (A1)(A2A3) which is %d",res1);
	else
	printf("the paranthesisation that has minimum cost is (A1A2)(A3) which is %d",res2);
	
}
