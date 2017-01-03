#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	int i;

	i = -1;
	while (i < 530)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("Input = %d\n", i);
			printf("Built-IN %d\n", isascii(i));
			printf("Yours %d\n\n", ft_isascii(i));
		}
		i++;
		if (i == 530)
			printf("Matches All Test Cases\n");
	}
	return (0);
}
