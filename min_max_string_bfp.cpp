#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,n,c;
	char max[50],min[50];
	char a[100][100],s[100];
	printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the strings:");
    for(int i=0;i<n;i++)
    {
        //int num=rand()%100+1;
        scanf("%s",&s);
        strcpy(a[i],s);
        
    }
    
	strcpy(max,a[0]);
	strcpy(min,a[0]);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],max)>0)
		{
			strcpy(max,a[i]);
		}
		else if(strcmp(a[i],min)<0)
		{
			strcpy(min,a[i]);
		}
		else
		{
			c++;
		}
	}
	printf("max string  according to lexicographical order is: %s",max);
	printf("\nmin string according to lexicographical order is: %s",min);
}
