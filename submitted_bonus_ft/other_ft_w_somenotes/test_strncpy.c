#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	s1[] = "hello";
	char	s2[] = "god";

	size_t	i;

	i = 7;
	printf("Input:\ndst = %s\nsrc = %s\nlen = %zu\n", s1, s2, i);
	printf("Library = '%s'\n", strncpy(s1, s2, i));
	printf("Your ft = '%s'\n", ft_strncpy(s1, s2, i));
	return (0);
}
