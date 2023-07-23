#include<stdio.h>
/*
*
#*
#*#
*#*#
*#*#*
*/
int main()
{
	int n,c=1,i,j;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(c>=1 && c<=2)
			{
				if((i+j)%2==0)
				{
					printf("*");
				}
				else
				{
					printf("#");
				}	
			}
			if(c>=3 && c<=4)
			{
				if((i+j)%2==0)
				{
					printf("#");
				}
				else
				{
					printf("*");
				}	
			}
		}
		if(c==4)
			c=1;
		c++;	
		printf("\n");
	}	
	return 0;
}
