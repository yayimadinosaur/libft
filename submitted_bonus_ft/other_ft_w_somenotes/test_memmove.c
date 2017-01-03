#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int i;

	i = 5;
	char	x[] = "123"; // 8 chars + null
	char	y[] = "abc"; // 5 chars + null
//	char	z[] = "123"; // 3 chars + null

	printf("input src = %s\n", x);
	printf("input dst = %s\n", y);
	printf("input len = %d\n", i);
	printf("Library = '%s'\n", memmove(x, y, i));
//	printf("Your ft = '%s'\n", ft_memmove(x, y, i));
	return (0);
}
