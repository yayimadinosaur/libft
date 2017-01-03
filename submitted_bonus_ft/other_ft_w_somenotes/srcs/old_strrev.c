char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	buff = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1)); 
	while (str[i] != '\0')
	{
		buff[i] = str[j];
		ft_putchar(buff[i]);
		j--;
		i++;
	}
	buff[i] = '\0';
	ft_putstr("full buff = ");
	ft_putstr(buff);
	ft_putchar('x');
	ft_putchar('\n');
	return (buff);
}

/* TIP FROM JOSH - use put_nbr moded to each array of int into char form
 * also use lldb to test
 */
