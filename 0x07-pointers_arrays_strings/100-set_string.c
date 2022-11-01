#include "main.h"
/**
 * set_string ->  sets the value of a pointer to a char
 * @s: pointer to pointer as argument
 * @to: pointer as argument
 */
void set_string(char **s, char *to)
{
	*s = to;
}
