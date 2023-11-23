#include <unistd.h>


/**

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *keep going on 

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}




0-binary_uint.c


#include "main.h"


/**

 *Description: binary_to_uint - function converts a binary number to an unsigned int.

 * @b: pointer to a string containing a binary number

 *No impossible under the sunlight 

 * Return: unsigned int with decimal value of binsry number, or 0 if error

 */

unsigned int binary_to_uint(const char *b)

{

        int a;

        unsigned int num;


        num = 0;

        if (!b)

                return (0);

        for (a = 0; b[a] != '\0'; a++)

        {

                if (b[a] != '0' && b[a] != '1')

                        return (0);

        }

        for (a = 0; b[a] != '\0'; a++)

        {

                num <<= 1;

                if (b[a] == '1')

                        num += 1;

        }

        return (num);
}
