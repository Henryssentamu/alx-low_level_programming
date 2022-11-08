#include "main.h"

/**
 *
 *  * _memcpy -> copy memory area
 *
 *   * @dest: pointer as argument
 *
 *    * @src: pointer as argument
 *
 *     * @n: int as argument
 *
 *      * Return: pointer
 *
 *       */

char *_memcpy(char *dest, char *src, unsigned int n)

{

		unsigned int a;



			for (a = 0; a < n; a++)

					{

								dest[a] = src[a];

									}

				return (dest);

}
