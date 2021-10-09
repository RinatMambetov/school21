#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"

int	main(void)
{
	char str0[] = "abcdef";
	char str1[] = "";
//	char str2[] = "123456";
//	char str3[] = "-123456";

//	printf("%d\n", INT_MAX);
//	printf("%d\n", INT_MIN);
	printf("%d\n", ft_strlen(str0));
	printf("%d\n", ft_strlen(str1));
	ft_putstr(str0);
	putchar('\n');
	ft_putnbr(123456);
	putchar('\n');
	ft_putnbr(INT_MIN);
	putchar('\n');
	ft_putnbr(INT_MAX);
	putchar('\n');
	printf("%d\n", ft_atoi(" - 12a3"));
	printf("%d\n", ft_atoi("	+123a"));
	printf("%d\n", ft_atoi("  ---+-+1234ab567"));
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	printf("%d\n", ft_atoi("999999999999"));
	return (0);
}
