#include "libft.h"
#include <stdio.h>

int main()
{
   char *s = "agfkhgdlaifhjsfgskdjf"; 
   printf("%s\n", (char *)ft_memchr(s, '\0', 5));
}