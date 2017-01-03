#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*big;
	char	*little;
	size_t	i;

/*	big = "helhello";
	little = "hell";
*/	i = 10;

	big = "un deux 9";
	big[9] = '6';
	big[1] = 0;
	little = "deux";

	printf("big = '%s'\n", big);
	printf("little = '%s'\n", little);
	printf("len = '%zu'\n", i);

	printf("built ft = '%s'\n", strnstr(big, little, i));
	printf("yours ft = '%s'\n", ft_strnstr(big, little, i));
	return (0);
}
