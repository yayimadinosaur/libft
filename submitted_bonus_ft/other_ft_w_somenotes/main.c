/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:07:29 by wfung             #+#    #+#             */
/*   Updated: 2016/12/13 19:17:08 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" /* including libft.h self made library to access fts */
#include <ctype.h> /* for TEST ft_toupper.c ft_isalnum ft_isalpha ft_isdigit ft_tolower */
#include <stdio.h> /* for PRINTF */

/* TEST ft_toupper.c 
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		ft_putstr("My Code : ");
		while (argv[1][i] != '\0')
		{
			ft_putchar(ft_toupper(argv[1][i]));
			i++;
		}
		i = 0;
		printf("%s", "Library Code : ");
		while (argv[1][i] != '\0')
		{
			printf("%c", toupper(argv[1][i]));
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
*/

/* TEST ft_tolower.c
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		ft_putstr("My Code : ");
		while (argv[1][i] != '\0')
		{
			ft_putchar(ft_tolower(argv[1][i]));
			i++;
		}
		i = 0;
		printf("%s", "Library Code : ");
		while (argv[1][i] != '\0')
		{
			printf("%c", tolower(argv[1][i]));
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
*/

/*  TEST ft_itoa.c */
/*
int		main(void)
{
	int i;

	i = 0;
	ft_putstr("input : 0\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = -1;
	ft_putstr("input : -1\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = 1;
	ft_putstr("input : 1\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = 10;
	ft_putstr("input : 10\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = -10;
	ft_putstr("input : -10\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = 1234;
	ft_putstr("input : 1234\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = -1234;
	ft_putstr("input : -1234\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = -2147483647;
	ft_putstr("input : INT_MIN -2147483647\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = 2147483647;
	ft_putstr("input : INT_MAX 2147483647\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	i = -2147483648;
	ft_putstr("input : INT_MIN -1\nresult = ");
	ft_putstr(ft_itoa(-2147483648));
	ft_putstr("\nshould overflow\n");
	ft_putchar('\n');
	ft_putchar('\n');

	i = 2147483649;
	ft_putstr("input : INT_MAX +1\nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putstr("\nshould overflow\n");
	ft_putchar('\n');
	ft_putchar('\n');

	i = '\0';
	ft_putstr("input : NULL \nresult = ");
	ft_putstr(ft_itoa(i));
	ft_putchar('\n');
	ft_putchar('\n');

	return (0);
}
*/


/* TEST FOR FT_STRCAT
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr(ft_strcat(argv[1], argv[2]));
	}
	return (0);
}
*/

/* TEST FOR FT_STRNCAT 
 *
 * >>>>>>>
 * >>>>>>>>>>>
 * >>>>>>>>>>>>> PLEASE UPDATE TEST CASES <<<<<<<<<<
 *

int		main(void)
{
	ft_strncat();
	return (0);
}
*/

/* TEST FOR FT_ISALPHA */

/*
int		main(void)
{
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	ft_isalpha();
	return (0);
}
*/

/* TEST FOR FT_ISDIGIT */
/*
int		main(void)
{
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	ft_isdigit();
	return (0);
}

*/
/* TEST FOR FT_ISALNUM */
/*
int		main(void)
{
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
	ft_isalnum();
}
*/

/* test for FT_ISASCII */
/*           >>>>>>>>>>>>>>> ADD TEST CASES PLEASE <<<<<<<<<<<< 
int		main(void)
{
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	ft_isascii();
	return (0);
}

*/

/* TEST FOR FT_ISPRINT */
/*           >>>>>>>>>>>>>>> ADD TEST CASES PLEASE <<<<<<<<<<<<
int		main(void)
{
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	ft_isprint();
	return (0);
}
*/

/* TEST FOR FT_STRCHR */

/*           >>>>>>>>>>>>>>> ADD TEST CASES PLEASE <<<<<<<<<<<<
int		main(void)
{
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	ft_strchr( , );
	return (0);
}
*/

/* TEST FOR FT_STRCMP */
/*
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Test String1 = '%s'\nTest String2 = '%s'\n", argv[1], argv[2]);
		printf("Result = %i\n", ft_strcmp(argv[1], argv[2]));
		printf(">>>Note\nIf Result = -1, s2 > s1;\nif +1, s1 > s2;\nif 0, s1 == s2.\n<<<<<\n");
	}
	else if (argc != 3)
		printf("Wrong # of Arguments!\n");
	return (0);
}
*/

/* TEST FOR FT_STRNCMP */
/* >>>>>>>>>>>>>>>>>>>>>>> PLEASE ADD TEST CASES AND UNDERSTAND SIZE_T; delcare it in libft.h 
 *
int		main(int argc, char **argv)
{
	if (argc == 3)
	{

	}
	else if (argc != 3)
		printf("Wrong # of Argumnts!\n");
	return (0);
}
*/

/* TEST FOR FT_STRSPLIT */

/*
int		main(int argc, char **argv)
{
	int		i;
	char	x;
	char	**y;

	i = 0;
	x = '*';
	if (argc == 2)
	{
		y = ft_strsplit(argv[1], x);
		while (y[i] != NULL)
		{
			printf("%s\n", y[i++]);
		}
	}
	else
		printf("Wrong # of Arguments!");
	return (0);
}

*/

/*	TEST FOR ft_striter.c */

/*	TEST FOR ft_striteri.c */

/*	TEST FOR ft_strmap.c */

/*	TEST FOR ft_strmapi.c */

/*	TEST FOR ft_????? */

/* TEST FOR FT_MEMSET ; uses string.h in C */
/*
int		main(void)
{
	char str[50];
	char *str1;
	char *str2;

	str1 = "Hello World";
	str2 = "RandomTest1";
	strcpy(str,"This is string.h library function");
	puts(str);
	ft_putchar('\n');
	memset(str, -1,7);
	puts(str);
	ft_putchar('\n');

	ft_putstr(ft_memset((void*)str, -1, 7));
	ft_putchar('\n');

   
   return(0);
}
*/

