#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char *s1 = "this is the way";
	char *s2;
	char *s2bis;
	s2 = strdup(s1);
	s2bis = ft_strdup(s1);
	printf("or : %s\nft : %s\n", s2, s2bis);
}
