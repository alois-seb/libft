#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	int tab[] = {65, 75, 26, 24, 97};
	int *cpy;
	int *cpy2;
	int len = sizeof(int) * 5;

	cpy = (int*)malloc(len);
	cpy2 = (int*)malloc(len);
	memcpy(cpy, tab, len);
	ft_memcpy(cpy2, tab, len);
	len = 0;
	while (len < 5)
		printf("%d ", cpy[len++]);
	printf("\n");
	len = 0;
	while (len < 5)
		printf("%d ", cpy2[len++]);
	printf("\n");
}
