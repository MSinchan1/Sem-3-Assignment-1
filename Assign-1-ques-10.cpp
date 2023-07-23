#include<stdio.h>
#include<stdlib.h>
//Write a program to merge two sorted array of length M and N(M and N may not be equal)
int main()
{
	int M,N,i,j,k,*a1,*a2,*a3;//declare variables and pointers
	printf("Enter the size of the first array: ");
	scanf("%d",&M);//entering the size of the first array	5
	a1=(int*)malloc((M)*sizeof(int));//declare first array with dynamic memory allocation
	printf("Enter the size of the second array: ");
	scanf("%d",&N);//entering the size of the second array	3
	a2=(int*)malloc((N)*sizeof(int));//declare second array with dynamic memory allocation
	a3=(int*)malloc((M+N)*sizeof(int));//declare third(merged) array with dynamic memory allocation
	//used for entering the first array elements
	printf("\nEnter the first array elements: ");
	for(i=0;i<M;i++)
	{
		scanf("%d",&a1[i]);//1....2.....3....8......9
	}
	//used for entering the second array elements
	printf("\nEnter the second array elements: ");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a2[i]);//4......5....10
	}
	//used for the merging two given array
	for(i=0,j=0,k=0;i<M&&j<N;k++)
	{
		if(a1[i]<a2[j])//when first array element is less than the second array element
		{
			a3[k]=a1[i];//1.....2.....3		....8......9
			i++;
		}
		else
		{
			a3[k]=a2[j];//4......5	......10
			j++;
		}
	}
	while(i<M)//iterate if any elements left in the first array
	{
		a3[k]=a1[i];
		i++;
		k++;
	}
	while(j<N)//iterate if any elements left in the second array
	{
		a3[k]=a2[j];
		j++;
		k++;
	}
	//used for the printing the merged sorted array
	for(i=0;i<(M+N);i++)
	{
		printf("%d	",a3[i]);//1.....2.....3.....4.....5....8....9......10
	}
	return 0;
}
