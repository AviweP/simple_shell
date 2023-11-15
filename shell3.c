#include "shell.h"

int main(int argc, char argv[])
{
	char *argv[] = {"/bin/ls", "ls", "ls -l /tmp ", NULL};
        size_t n = 0;
        char *buffer = NULL;
        char *token;
        int status, x = 0;
        char **array;

        while (1)
        {
                write(1, ":) ", 3);
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
		if (char *argv[] == 0)
		{
			execve("/usr/bin/ls", argv, NULL);
			perror("error:");
		}
		
	}
}
