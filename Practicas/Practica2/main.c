#include <stdio.h>
#include "operations.h"

int main(int argc, char const *argv[])
{
	char operations[200];
	int operator1, operator2;
	printf("%s","What is the operation?");
	scanf("%s",operations);
	scanf("%d %d",&operator1,&operator2);
	printf("result: %d\n", add(operator1,operator2));
	return 0;
}