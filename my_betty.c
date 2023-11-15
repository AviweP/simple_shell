#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * main - PID
 *Description - get the process id
 * Return: Always 0.
 */
int main(void)
{
pid_t my_pid;  /**pid_ is a variable and the my_pid is a variable name **/

my_pid = getpid();   /* the variable name get the process id*/

while (my_pid);
{
return (0);
}
}
