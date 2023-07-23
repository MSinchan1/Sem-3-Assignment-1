#include<stdio.h>
/*
   1
  2 3
 4 5 6 
7 8 9 10
*/
int main()
{
	int i,num,space,n,k=1;
	printf("Enter no of rows: ");//taking input from the user
	scanf("%d",&n);
	for(int i=1;i<=n;i++)//interates upto the no of rows
	{
		for(space=n-i;space>=1;space--)//iterates to print the spaces
		{
			printf(" ");
		}
		for(num=1;num<=i;num++)//iterates to print the digits
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
