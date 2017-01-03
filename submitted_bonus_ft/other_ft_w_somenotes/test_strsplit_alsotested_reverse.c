#include "libft.h"

int		main(int argc, char **argv)
{
	int		i;
	char	c;
	char	**buff;

	c = '*';
	i = 0;
	buff = ft_strsplit(argv[1], c);
	if (argc == 2)
	{
		while (buff[i] != '\0')
		{
			i++;
		}
		i = i - 1;
		while (i >= 0)
		{
			ft_putstr(buff[i]);
			if (i > 0)
				ft_putstr(" ");
			i--;
		}
		ft_putstr("\n");
	}
	else
		ft_putstr("Wrong # of Args\n");
	return (0);
}
