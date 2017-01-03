#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	ft_putchar(str[i]);
	i++;
	}
}

char	*ft_buff_str(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	while (str[i] != '\0' || str[i] == ' ' || str[i] == '\t')
	i++;
	while (str[i] != ' ' || str[i] != '\t' || str[i] != '\0')
	j++;
	buff = (char*)malloc(sizeof(char) * j + 1);
	while (str[i] != '\0' || str[i] != ' ' || str[i] != '\t')
	{
		buff[i] = str[i];
		i++;
	}
	buff[j + 1] = '\0';
	return (buff);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(ft_buff_str(argv[1]));
		ft_putchar('\n');
	}
	else if (argc != 2)
	{
		ft_putchar('\n');
	}
	return (0);
}

