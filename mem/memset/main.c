#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char str[50] = "This is the way";
	char b[50] = "This is the way";

	memset(str + 4, '7', 4 * sizeof(char));
	ft_memset(b + 4, '7', 4 * sizeof(char));
	printf("or : %s\n", str);
	printf("ft : %s\n", b);
}
