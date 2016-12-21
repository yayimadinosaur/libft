#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*str = "Hello les genw";
	char	*str1 = "Hello";
	int		i;

	i = 6;
	printf("Input = %d\n", i);
	printf("little = '%s'\n", str1);
	printf("big = '%s'\n", str);
	printf("Library = %s\n", strnstr(str, str1, i));
	printf("Your Code = %s\n", ft_strnstr(str, str1, i));
	return (0);

/*
	str, Hello, 6; - pass;
	str, Hello, 3; - pass;
	str, les, 1; - pass; x
	str, gen, 2; - pass; x
	str, w, 0; - pass; x
	str, "", 3; - pass; x
*/
}
