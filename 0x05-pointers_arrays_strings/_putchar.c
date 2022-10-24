#include <unistd.h>
/**
 * _putchar -> writes a character c
 * @c: character
 * Return:on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
