#include "main.h"

/**
 *
 *  * _strncat ->  copies a string
 *
 *   * @n: int
 *
 *    * @dest: string
 *
 *     * @src: string
 *
 *      * Return: string
 *
 *       */

char *_strncat(char *dest, char *src, int n)

{

		int j = 0, i = 0;



			while (dest[i] != '\0')

					{

								i++;

									}

				while (j < n && src[j] != '\0')

						{

									dest[i] = src[j];



											i++;



													j++;

														}

					dest[i] = '\0';



						return (dest);

}
