#include <stdio.h>
/**
* swap_int - a function that replace the value of a with b
* and b with a
*
* @a : the integer
* @b : the integer
* @m : the modifier
*/
void swap_int(int *a, int *b)
{
int m;
m = *a;
*b = *a;
*b = m;
}
