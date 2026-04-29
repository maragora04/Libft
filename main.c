#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str = malloc(12); 
	ft_memcpy(str, "Hello World", 12);
	printf("%s\n", str);
	free(str);
}