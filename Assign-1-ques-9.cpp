#include<stdio.h>
#include<stdlib.h>
//Write a program to find frequency of given number k.
int main()
{
	int i,j,n,k,*a,count=0,f=0;//declairing variables
	printf("Enter the size of the array: ");
	scanf("%d",&n);//taking the size of the array from user	5
	a=(int*)malloc((n)*sizeof(int));
	printf("\nEnter the array elements: ");
	//this loop is used for taking input from the user
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//1....2....3...3.....4
	}
	printf("Enter the elements to be find: ");
	scanf("%d",&k);//taking the element to be find	3
	//this loop used for find the frequency of the given element 
	for(i=0;i<n;i++)
	{
		if(a[i]==k)//executes when given element is found from the user3....3
		{
			count+=1;//increase the for frequency	1.......2
			f=1;//changed when given element is present in the array
		}
	}
	if(f==0)//executes when the given element is not found
	{
		printf("\nGiven element is not present");
	}
	else//executes when the given element is  found
	{
		printf("Element %d is present %d times",k,count);
	}
	return 0;
}
