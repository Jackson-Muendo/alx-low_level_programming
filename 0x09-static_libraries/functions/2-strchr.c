#include "main.h"



/**
 *
 *  * _strchr - Returns a pointer to the first occurrence of the character c
 *
 *   *  in the string s
 *
 *    * @s: string
 *
 *     * @c: constant
 *
 *      * Return: p
 *
 *       */



char *_strchr(char *s, char c)

{

		while (*s++)

				{

							if (*s == c)

										{

														return (s);

																}

									if (!*s)

												{

																return (0);

																		}

										}

			return (0);

}
