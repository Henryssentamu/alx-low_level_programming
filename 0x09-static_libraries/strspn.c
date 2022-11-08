#include "main.h"

/**
 *
 *  *  _strspn -> gets length of a prefix substring
 *
 *   *  @s: pointer as argument
 *
 *    *  @accept: pointer as argument
 *
 *     *Return: unsigned int
 *
 *      */

unsigned int _strspn(char *s, char *accept)

{

		unsigned int i = 0, b, t = 0;



			while (accept[i])

					{

								b = 0;



										while (s[b] != 32)

													{

																	if (accept[i] == s[b])

																					{

																										t++;

																													}

																				b++;

																						}

												i++;

													}

				return (t);

}
