
#include "main.h"
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}



long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}