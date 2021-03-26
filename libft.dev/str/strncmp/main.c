#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char *s1 = "this is the way";
	char *s2 = "this is the 117";
	printf("or : %d\n", strncmp(s1, s2, 15));
	printf("ft : %d\n", ft_strncmp(s1, s2, 15));
}
