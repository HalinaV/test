#include <stdio.h>
#include <stdlib.h>

/* link to the tutorial - http://c-for-dummies.com/blog/?p=1112 */

int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 1000;
	int characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	characters = getline(&buffer,&bufsize,stdin);
	printf("%d characters were read.\n", characters);
	printf("%s",buffer);

	return(0);
}
