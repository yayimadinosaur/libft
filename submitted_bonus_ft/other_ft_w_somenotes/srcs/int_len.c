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
	}
	return (y);
}

int		main(void)
{
	ft_putstr("input = ");
	ft_putnbr(1);						/* 1 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(1));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(0);						/* 0 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(0));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(-1);						/* -1 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(-1));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(10);						/* 10 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(10));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(-10);						/* -10 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(-10));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(11);						/* 11 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(11));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(12);						/* 11 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(12));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(-100);						/* -100 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(-100));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(1000);					/* 1000 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(1000));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("input = ");
	ft_putnbr(-10000);					/* -10000 */
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(-10000));
	ft_putchar('\n');
	ft_putchar('\n');

/*	ft_putstr("input = ");
	ft_putnbr();
	ft_putchar('\n');
	ft_putstr("length = ");
	ft_putnbr(ft_x(1));
	ft_putchar('\n');
*/
	return (0);
}
