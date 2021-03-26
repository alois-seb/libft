#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char *haystack = "this is the 117 way";
	char *needle = "117";

	printf("or : %s\n", strnstr(haystack, needle, 15));
	printf("ft : %s\n", ft_strnstr(haystack, needle, 15));
}
