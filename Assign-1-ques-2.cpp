#include<stdio.h>
/*
    A
   B B
  C C C
 D D D D
E E E E E
*/
int main()
{
    int n;
    printf("Enter no of rows: ");//taking input from the user
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//iterates upto the given no of rows
    {
        for(int space=n-i;space>=1;space--)//used for printing the space
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)//used for printing the characters
        {
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}
