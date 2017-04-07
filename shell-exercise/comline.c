#include <stdio.h>
#include <stdlib.h>

/**
 * function that splits a string and returns an array of each word of the string
 *
 */

int main()
{
	char *buffer;
	size_t bufsize = 32;
	int characters;
	int i;
	char *pch;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	characters = getline(&buffer,&bufsize, stdin);
	printf("%d characters were read.\n", characters);
	printf("%s",buffer);
	i = 0;
	pch[i] = strtok(buffer, "\n ");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch[i] = strtok (NULL, "\n");
		i++;
	}

	return(0);
}
