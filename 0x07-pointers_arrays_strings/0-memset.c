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

 
strcpy(s, "b");

 b = 'b';

for ( n=0 ; n<10 ; n++)
{
	s[n]=b;

}

return(0);


}
