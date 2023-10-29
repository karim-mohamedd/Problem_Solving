// C code for hollow rectangle
#include <stdio.h>

// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i==1 || i==n || j==1 || j==m)		 
				printf("*");		 
			else
				printf(" ");		 
		}
		printf("\n");
	}

}

// Driver program for above function
int main()
{
	int rows, columns;
    printf("please enter the rows : \n","%d");
    scanf("%d", &rows);
    printf("please enter the columns : \n","%d");
    scanf("%d", &columns);
	print_rectangle(rows, columns);
	return 0;
}
