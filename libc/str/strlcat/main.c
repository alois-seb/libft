#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char dst[15] = "this is";
	char dst2[15] = "this is";
	char *src = "the way";

	printf("OR ::\n len : %lu\n %s\n\n", strlcat(dst, src, 15), dst);
	printf("FT ::\n len : %lu\n %s\n\n", ft_strlcat(dst2, src, 15), dst2);
}
