#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	int i;

	i = -1;
	while (i < 530)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("Input = %d\n", i);
			printf("Built-IN %d\n", isprint(i));
			printf("Yours %d\n\n", ft_isprint(i));
		}
		i++;
		if (i == 530)
			printf("Matches All Test Cases\n");
	}
	return (0);
}
