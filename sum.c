/*program to add two integers
	Author :Sohith
	Date :3-9-2020
	Description : Reads two integers and add those */
#include <stdio.h>
int add(int inp1,int inp2)
{
	return ( inp1 + inp2);
}

int main()
{
	int inp1= 10;
	int inp2 = 20;
	int result = add(inp1,inp2);
	printf("Result is %d \n", result);
	return 0;
}

