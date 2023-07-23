#include<stdio.h>
#include<stdlib.h>
//Write a program insert a new element in array at given location k
int main()
{
	int i,n,*a,element,pos;//declairing variables
	printf("Enter the size of the array: ");
	scanf("%d",&n);//taking the size of the array from user	5
	a=(int*)malloc((n)*sizeof(int));//dynamically allocate the memory of array wiht given size
	printf("\nEnter the array elements: ");
	//this loop is used for taking input from the user
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//1.....2....4.....5.....6
	}
	printf("Enter the position of the new element: "); 
	scanf("%d",&pos);//taking the position of the element 	10
	if(pos<=n)//executes when position found
	{
		n=n+1;// array size will increase by 1(5+1=6)
		printf("Enter the elements to be insert: ");
		scanf("%d",&element);//taking the element to be insert 3
		// this loop swapping the value from previous to next position
		for(i=n-1;i>=pos-1;i--)//executes upto the entered position-1
		{
			a[i+1]=a[i];
		}
		a[pos-1]=element;//store the given element to the given position
		printf("\nArray elements are: \n");
		//this loop is used for the printing the new array
		for(i=0;i<n;i++)
		{
			printf("%d	",a[i]);//1....2...10....4.....5.....6
		}	
	}
	else
	{
		printf("\nPosition not found");
	}
	return 0;
}
