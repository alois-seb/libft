#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char *str = "This is the way";

	printf("or : %lu\n", strlen(str));
	printf("ft : %zu\n", ft_strlen(str));
}
