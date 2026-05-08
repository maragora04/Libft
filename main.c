#include "libft.h"
#include <stdio.h>

int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strchr(s, 't' + 256));
}