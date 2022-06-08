#include <stdio.h>
#include "main.h"

/**
 *  _abs - returns absolute value of an int
 *  @num: the input
 *  Return: Void
 */
int _abs(int num)
{
if (num > 0)
return (num);
else if (num == 0)
return (0);
else
return (-1 * num);
}
