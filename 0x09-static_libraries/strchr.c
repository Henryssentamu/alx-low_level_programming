#include "main.h"

/**
 *
 *  * _strchr -> locates a char in str
 *
 *   * @s: pointer argument
 *
 *    * @c: char argument
 *
 *     * Return: pointer
 *
 *      */

char *_strchr(char *s, char c)

{

		int b, a = 0;



			while (s[a])

					{

								a++;

									}

				for (b = 0; b <= a; b++)

						{

									if (c == s[b])

												{

																s += b;



																			return (s);

																					}

										}

					return ('\0');

}
