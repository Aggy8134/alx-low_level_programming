#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on errer, -1 is returned, and errorno is set approximately.
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
