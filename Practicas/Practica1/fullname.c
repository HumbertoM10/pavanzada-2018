#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int doFullName(	char *firstName,
				char *lastName,
				char **fullNameValue)
{
	int sizeFirstName = strlen(firstName);
	int sizeLastName = strlen(lastName);
	int sizeFullName = sizeFirstName + sizeLastName;

	char *fullName = (char *) malloc(sizeFullName * sizeof(char));

	strcpy(fullName, firstName);
	strcpy(fullName + sizeFirstName, " ");
	strcpy(fullName + sizeFirstName +1, lastName);
	*fullNameValue = fullName;
}

int main()
{
	char firstName[] = "Humberto";
	char lastName[] = "Meza";
	char *fullName;
	doFullName(firstName, lastName, &fullName);

	printf("%s \n", fullName);
	return 0;
}