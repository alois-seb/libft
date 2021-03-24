#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char str[50] = "This is the way";
	char str2[50] = "This is the way";
	bzero(str, 5 * sizeof(char));
	ft_bzero(str2, 5 * sizeof(char));
	int i;
	int j;

	i = 0;
	while (str[i] == '\0')
		i++;
	j = 0;
	while (str2[j] == '\0')
		j++;
	printf("%s\n", str + i);
	printf("%s\n", str2 + j);
}
