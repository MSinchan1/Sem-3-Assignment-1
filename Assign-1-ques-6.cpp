#include<stdio.h>
#include<stdlib.h>
//Write a program to delete an element from an array.
int main()
{
	int i,j,n,*a,element,k,f=0;//declairing variables
	printf("Enter the size of the array: ");
	scanf("%d",&n);//taking the size of the array from user	5
	a=(int*)malloc((n)*sizeof(int));//dynamically allocate the memory of array wiht given size
	printf("\nEnter the array elements: ");
	//this loop is used for taking input from the user
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//1....2.....3....4.....4
	}
	printf("Enter the elements to be delete: ");
	scanf("%d",&element);//taking the element to be delete	4
	//this loop is used for the given element deletion
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
        {
            if(a[j]==element)//this will execute when given element will found
            {
                for(k=j;k<n;k++)//this loop is used for remove the digit
                {
                    a[k]=a[k+1];//array will rearranged after removing	1....2.....3......4.....1.....2.....3
                }
                n--;//size will decrease
                j--;
                f=1;//f is changed when element is found
            }
        }
	}
	if(f==1)//when element is removed new array will print
	{
		printf("\nArray elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d	",a[i]);//1.....2.....3
		}	
	}
	else
	{
		printf("Given element is not present in the array");
	}
	return 0;
}
	
