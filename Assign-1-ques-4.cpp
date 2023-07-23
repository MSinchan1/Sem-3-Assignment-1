#include<stdio.h>
//Consider the given series and calculate the summation upto t'N' number.1+1+4+9+25+64+......+N.
int main()
{
	int i,n,sum=0,a=1,b=0,final_sum=1;//declaring variables
	printf("Enter number: ");//taking input from the user for number of terms
	scanf("%d",&n);
	for(i=1;i<n;i++)//iterates upto the number of terms
	{
		sum=a+b;//0+1.......1+1.....2+1......3+2.....5+3......n
		b=a;//1...1.....2......3......5
		a=sum;//1...2.....3.....5......8
		final_sum+=(sum*sum);//1+(1*1)+(3*3)+(5*5)+(8*8)
	}
	printf("Sum of the given series is: %d",final_sum);	
	return 0;
}
