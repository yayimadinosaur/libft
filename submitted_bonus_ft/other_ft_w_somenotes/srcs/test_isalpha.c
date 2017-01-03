#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int x;
	int y;

	x = -5;
	y = 0;
	while (x < 300)
	{
		if (isalpha(x) != ft_isalpha(x))
		{
			printf("Input = %d\n", x);
			printf("Built In = %d\n", isalpha(x));
			printf("Me = %d\n", ft_isalpha(x));
			y++;
		}
		x++;
	}
	if (y == 0)
	{
		printf("All Cases Match\n");
	}
	return (0);
}
