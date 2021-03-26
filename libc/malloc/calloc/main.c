#include <stdio.h>
#include "libft.h"

int	main()
{
	int i;
	char *str;
	
	str = calloc(7, sizeof(char));
	i = 0; 
	while (i <= 50)
	{
		printf("%d", str[i]);
		i++;
	}	
}
