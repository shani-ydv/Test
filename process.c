#include<stdio.h>
int main()
{
	int b,p,bs[20],ps[20],i,j;
	printf("Enter no. of blocks\n");
	scanf("%d",&b);
	for(i=0;i<b;i++)
    {
    	printf("Enter the block size\n");
    	scanf("%d",&bs[i]);
	}
	printf("Enter the number of process\n");
	scanf("%d",&p);
	for( i=0;i<p;i++)
	{
		printf("Enter the size of process %d\n",i);
		scanf("%d",&ps[i]);
	}
	for(i=0;i<b;i++)
	{
		for( j=0;j<p;j++)
		{
			if(ps[j]<=bs[i]){
				printf("The process %d is allocated to %d\n",j,bs[i]);
				ps[j]=10000;
				break;
			}
		}
	}
	for( j=0;j<p;j++)
	{
		if(ps[j]!=10000)
		{
			printf("the process %d is not allocated\n",j);
		}
	}
	
}
