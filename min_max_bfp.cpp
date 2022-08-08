#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,a[100],n,c;
	int max,min;
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
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
		else
		{
			c++;
		}
	}
	printf("max no is: %d",max);
	printf("\nmin no is: %d",min);
}
