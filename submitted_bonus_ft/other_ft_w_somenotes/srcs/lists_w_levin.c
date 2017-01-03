#include <stdlib.h>
#include <stdio.h>

typedef struct s_practice
{	
	void *n;
	struct s_practice *next;
}		t_practice;


/*void recursion(thing)
{
	if(i leave)
		return ;
	recursion(something else);
}*/

void print_list(t_practice *practice)
{
	int *num;
	while (practice != NULL)
	{
		num = (int*)practice->n;
		printf("%d\n", *num);
		practice = practice->next;
	}
}

void	ft_lstadd(t_practice **alst, t_practice *new)
{
	new->next = *alst;
	*alst = new;
}

int main()
{
	t_practice *x;
	t_practice *y;
	t_practice **z;

	z = (t_practice**)malloc(sizeof(t_practice*));

	int n[4] = {1, 2, 3, 4};

	x = (t_practice*)malloc(sizeof(t_practice));
	x->n = &n[0];
	x->next = (t_practice*)malloc(sizeof(t_practice));
	x->next->n = &n[1];
	x->next->next = (t_practice*)malloc(sizeof(t_practice));
	x->next->next->n = &n[2];
	x->next->next->next = NULL;
	print_list(x);

	ft_lstadd(z, y)
	return (0);
}
