#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

/**
 * command_line - read lines of text entered by a use.
 * Description: command line interpreter.
 *
 * return: 1 in error, 0 otherwise.
 */

int main(void)
{
	size_t n = 0;
	char *buffer = NULL;
	char *token;
	int status, x = 0;
	char **array;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		getline(&buffer, &n, stdin);
		array = malloc(sizeof(char *) * 1024);
		token = strtok(buffer, "\t\n");
		while (token)
		{
			array[x] = token;
			token = strtok(NULL, "\t\n");
			x++;
		}
		array[x] = NULL;
		if (execve(array[0], array, NULL) == -1)
		{
			perror("./shell");
		}
		x = 0;
		free(array);
	}
}
