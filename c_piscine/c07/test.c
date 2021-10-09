#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_strjoin.c"
//#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"

int	main(void)
{
	int min = -4;
	int max = 5;
	int size = max - min;
	int *arr;
	int i = 0;
	int **arr_u;

	printf("%s\n", ft_strdup("abc"));
	printf("%s\n", strdup("abc"));
	arr = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", arr[i]); 
		i++;
	}
	putchar('\n');
//	printf("%d\n", ft_ultimate_range(arr_u, min, max));
/*	i = 0;
	while (i < size)
	{
		printf("%d ", (*arr_u)[i]);
		i++;
	}
	return (0);
*/
	int **a;
	int	i2;
	int j;

	i2 = -5;
	j = 6;
	printf ("%d\n", ft_ultimate_range(a, i2, j));
	for (int i2 = 0; i2 < 11; i2++)
		printf("%d ", (*a)[i]);
	printf("\n");
	a++;
	ft_ultimate_range(a, 13, 42);
	for (int i2 = 0; i2 < 42 - 13; i2++)
		printf("%d ", (*a)[i]);
}
