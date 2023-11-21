#include "factor.h"

/**
 * factorize - It is the function to factorize a num
 * @buffer: The pointer to the address of the num
 *
 * Auth: MamaboloKatlego
 * Return: An int
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
