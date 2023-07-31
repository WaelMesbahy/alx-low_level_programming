#include <stdio.h>
#include <string.h>

/**
 * _memset - a function that fills the first n bytes of the memory area pointed to by s with the constant byte b
 * 
 *@s - a pointer 
 *
 *@n - an unsigned int 
 *
 */

char *_memset(char *s, char b, unsigned int n)
{


for (int i=0 ; n>0 ; i++)
{
	s[i]=b;
n--;
}

return(s);


}
