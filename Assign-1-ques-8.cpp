#include<stdio.h>
#include<stdlib.h>
//Write a program to find second highest element from an array(Do not use sorting).
int main()
{
	int i,n,*a,max1=0,max2=0;//declairing variables
	printf("Enter the size of the array: ");
	scanf("%d",&n);//taking the size of the array from user	5
	a=(int*)malloc((n)*sizeof(int));
	printf("\nEnter the array elements: ");
	//this loop is used for taking input from the user
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//1.....2.....3..4....4
	}
	//this loop is used for finding the second largest element
	for(i=1;i<n;i++)
	{
		if(max1<a[i])//1....2...3......4
		{
			max2=max1;//1....2.....3....4
			max1=a[i];//2.....3....4
		}
		if(max2<a[i] && a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("Second highest element is: %d",max2);
	return 0;
}
	
	
