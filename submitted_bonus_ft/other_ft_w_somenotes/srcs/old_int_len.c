
#include "libft.h"

int		ft_x(int nb)
{
	int y;

	y = 0;
	if (nb < 0)
	{
		y++;
		nb = nb * -1;
	}
	else if (nb == 0)
		y++;
	while (nb > 0)
	{
		y++;
		nb = nb / 10;
		nb = nb % 10;
	}
	return (y);
}

int main(void)
{
	int i;

	long int	y;				/* declaring for TESTING overflows */

	y = 0;						/* initialize */
	i = 0;						/* initialize TEST 0 */
	ft_putstr("i = ");			/*description of i */
	ft_putchar(i + 48);			/* i */
	ft_putstr("result = ");		/*descrip of result */
	ft_putchar(ft_x(i));		/*print result of digit counter test ft */
	ft_putchar('\n');			/* print nl */
	i = 1;						/* TEST 1 */
	ft_putstr("i = ");
	ft_putchar(i + 48);
	ft_putstr("result = ");
	ft_putchar(ft_x(i));
	ft_putchar('\n');
	i = -1;						/* TEST -1 */
	ft_putstr("i = ");
	ft_putchar('-');
	ft_putchar('1');			/* substitute print for -1; too lazy to fix */
	ft_putstr("result = ");
	ft_putchar(ft_x(i));
	ft_putchar('\n');
	i = 10;						/* TEST 10 */
	ft_putstr("i = ");
	ft_putstr(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
	i = -10;					/* TEST -10 */
	ft_putstr("i = ");
	ft_putchar(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
   	i = 9999;					/* TEST 9999 */
	ft_putstr("i = ");
	ft_putchar(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
	i = -9999;					/* TEST -9999 */
	ft_putstr("i = ");
	ft_putchar(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
	i = -2147483648;			/* TEST INT_MIN */
	ft_putstr("i = ");
	ft_putchar(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
	i = 2147483647;				/* TEST INT_MAX */
	ft_putstr("i = ");
	ft_putchar(ft_x(i));
	ft_putstr("result = ");
	ft_putchar('\n');
	y = -2147483649;			/* test int_min - 1; overflow by -1 */
	ft_putstr("i = ");
	ft_putchar(ft_x(y));
	ft_putstr("result = ");
	ft_putchar('\n');
	y = 2147483648;				/* TEST INT_MAX + 1; overflow by +1 */
	ft_putstr("i = ");
	ft_putchar(ft_x(y));
	ft_putstr("result = ");
	ft_putchar('\n');
	return (0);
}
