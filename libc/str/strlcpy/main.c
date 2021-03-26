#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char dst[8] = "this is";
	char dst1[8] = "this is";
	char *src = "the way 117";

	strlcpy(dst, src, 8);
	ft_strlcpy(dst1, src, 8);
	printf("OR :: \nlen src : %lu\ndst : %s\n\n", strlcpy(dst, src, 8), dst);
	printf("ft :: \nlen src : %lu\ndst : %s\n\n", ft_strlcpy(dst, src, 8), dst1);
}
