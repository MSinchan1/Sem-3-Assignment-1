#include<stdio.h>
#include<stdlib.h>
//Write a program to remove duplicate elements from an array
int main()
{
    int i,j,k,n,*a,f=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);//entering the size of the array	5
    a=(int*)malloc((n)*sizeof(int));//declare array with dynamic memory allocation
    printf("Enter the array elements: ");
    //this loop is used for entering the array elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1....2.....3.....3......4
    }
    //this loop is used for removing the duplicate elements
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])//this will execute when duplicate element will found
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];//1....2.....3.....4
                }
                n--;//size will decrease
                j--;
                f=1;//when duplicate element found
            }
        }
    }
    if(f==1)//when duplicate element found
    {
    //used for the printing the merged sorted array
    	for(i=0;i<n;i++)
    	{
       		printf("%d ",a[i]);//1.....2.....3.....4
    	}
	}
	else
	{
		printf("\nNo duplicate element is present in the given array");
	}
   
    return 0;
}
