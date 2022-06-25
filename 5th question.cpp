#include<stdio.h>
int main()
{
	int num[20],a,b,flag,count;
	printf("Enter any 20 Elements of Array : ");
	for(a=0;a<20;a++)
	{
		scanf("%d",&num[a]);
	}
	printf("Frequency of Elements : \n");
	for(a=0;a<20;a++)
	{
		count=0;
		flag=0;
		for(b=a-1;b>=0;b--)
		{
			if(num[a]==num[b])
			{
				flag=1;
				break;	
			}
		}
		if(flag==0)
		{
			for(b=a;b<20;b++)
			{
				if(num[a]==num[b])
					count++;
			}
			printf("%d\t%d\n",num[a],count);
		}
	}
	return 0;
}
