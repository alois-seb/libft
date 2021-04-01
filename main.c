#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char *s = "  this  is the way ";
	char set = ' ';
	char **strs;
	int i;

	strs = ft_split(s, set);
	while (strs[i] != NULL)
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
