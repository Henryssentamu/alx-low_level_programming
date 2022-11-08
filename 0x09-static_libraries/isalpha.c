#include "main.h"

/**
 *
 *  *  _isalpha -> checking for alphabetic characters
 *
 *   *  @c: taking c as an argument
 *
 *    *  Return: returns i if c in alphabet and 0 else
 *
 *     */

int _isalpha(int c)

{

		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
