#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include <stdio.h>
#include "ex06/ft_strlen.c"

int	main(void)
{
	int	n1;
	int n2;
	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;
	int n3 = 0;
	int n4 = 1;
	int div1;
	int mod1;
	char str1[] = "abc";

	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;
	a = &n2;
	ft_ft(&n1);
	printf("%d\n", n1);
	
	ft_ultimate_ft(i);
	printf("%d\n", n2);
	
	ft_swap(&n3, &n4);
	printf("%d %d\n", n3, n4);

	ft_div_mod(7, 2, &div1, &mod1);
	printf("%d %d\n", div1, mod1);

	ft_putstr(str1);
	putchar('\n');
	printf("%d\n", ft_strlen(str1));
	return (0);
}
