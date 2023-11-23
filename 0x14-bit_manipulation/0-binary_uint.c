#include "main.h"


/**

 * binary_to_uint - function converts a binary number to an unsigned int.

 * @b: pointer to a string containing a binary number

 * No impossible under the sunlight 

 * Return: unsigned int with decimal value of binsry number, or 0 if error

 */

unsigned int binary_to_uint(const char *b)

{

        int m;

        unsigned int num;


        num = 0;

        if (!b)

                return (0);

        for (m = 0; b[m] != '\0'; m++)

        {

                if (b[m] != '0' && b[m] != '1')

                        return (0);

        }

        for (m = 0; b[m] != '\0'; m++)

        {

                num <<= 1;

                if (b[m] == '1')

                        num += 1;

        }

        return (num);
}
