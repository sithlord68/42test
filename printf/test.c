/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:56:35 by pjolidon          #+#    #+#             */
/*   Updated: 2024/11/12 01:40:29 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "test.h"

void	testprintf(char *str, char type, char *desc, ...)
{
	char		*tmp;
	int			len;
	va_list		args;

	va_start(args, desc);
	len = -1;
	tmp = malloc(sizeof str + 2);
	while (str[++len])
		tmp[len] = str[len];
	tmp[len++] = '\n';
	tmp[len] = '\0';
	ft_putstr("****** printf \"");
	ft_putstr(str);
	ft_putstr("\" ");
	ft_putstr(desc);
	goprint(tmp, type, args);
	free(tmp);
	va_end(args);
}

void	main2(void)
{
	testprintf(" %p ", 'p', " %p 0", 0);
	testprintf(" %u ", 'u', " %u -1", -1);
	testprintf(" %u ", 'u', " %u 0", 10);
	testprintf(" %u ", 'u', " %u 11", 11);
	testprintf(" %u ", 'u', " %u 15", 15);
	testprintf(" %u ", 'u', " %u 99", 99);
	testprintf(" %u ", 'u', " %u 100", 100);
	testprintf(" %u ", 'u', " %u 101", 101);
	testprintf(" %u ", 'u', " %u -9", -9);
	testprintf(" %u ", 'u', " %u -10", -10);
	testprintf(" %u ", 'u', " %u -11", -11);
	testprintf(" %u ", 'u', " %u -99", -99);
}

int	main(void)
{
	int		ori;
	int		pft;
	char	*str;

	str = NULL;
	ori = printf("%X/a/%X/b/%X/c/%X/d/%X/e/%X/f/%X\n", INT_MAX, INT_MIN, \
		LONG_MAX, LONG_MIN, 0x0, -42, (unsigned int) ULONG_MAX);
	pft = ft_printf("%X/a/%X/b/%X/c/%X/d/%X/e/%X/f/%X\n", INT_MAX, INT_MIN, \
		LONG_MAX, LONG_MIN, 0x0, -42, (unsigned int) ULONG_MAX);
	print_res('X', "scdi%puxX", ori, pft);
	ori = printf("%X/a/%X/b/%X/c\n", (unsigned int) ULONG_MAX, 0x0, -42);
	pft = ft_printf("%X/a/%X/b/%X/c\n", (unsigned int) ULONG_MAX, 0x0, -42);
	print_res('X', "scdi%puxX", ori, pft);
	main2();
	ori = printf("printft\t\t: NULL %s NULL\n", str);
	pft = ft_printf("ft_printft\t: NULL %s NULL\n", str);
	print_res('s', "scdi%puxX", ori, pft);
	return (0);
}

/*
Errors found:
For /home/pascal/francinette/tests/printf/printfTester/tests/p_test.cpp:
33:     TEST(9, print(" %p %p ", 0, 0));

For /home/pascal/francinette/tests/printf/printfTester/tests/u_test.cpp:
26:     TEST(2, print(" %u ", -1));
29:     TEST(5, print(" %u ", 10));
30:     TEST(6, print(" %u ", 11));
31:     TEST(7, print(" %u ", 15));
32:     TEST(8, print(" %u ", 16));
33:     TEST(9, print(" %u ", 17));
34:     TEST(10, print(" %u ", 99));
35:     TEST(11, print(" %u ", 100));
36:     TEST(12, print(" %u ", 101));
37:     TEST(13, print(" %u ", -9));
38:     TEST(14, print(" %u ", -10));
39:     TEST(15, print(" %u ", -11));
40:     TEST(16, print(" %u ", -14));
41:     TEST(17, print(" %u ", -15));
42:     TEST(18, print(" %u ", -16));
43:     TEST(19, print(" %u ", -99));
	int	ori;
	int	pft;

	ft_printf("#### printf ####\n");
	ori = printf("int: %d %d %d %d\n", 9, 99, -9, -99);
	pft = ft_printf("int: %d %d %d %d\n", 9, 99, -9, -99);
	print_res('d', "scdi%puxX", ori, pft);
	ori = printf("ORI envirnoment: \"%s\"\n", OSENV);
	pft = ft_printf("PFT envirnoment: \"%s\"\n", OSENV);
	print_res('s', "scdi%puxX", ori, pft);
	ori = printf("ORI char: \"%%\" \"%c\" \"%s\"\n", '#', "c'est un test");
	pft = ft_printf("PFT char: \"%%\" \"%c\" \"%s\"\n", '#', "c'est un test");
	print_res('s', "scdi%puxX", ori, pft);
	ori = printf("ORI ints: [%i][%d][%u]\n", -1246, -1246, -1246);
	pft = ft_printf("PFT ints: [%i][%d][%u]\n", -1246, -1246, -1246);
	print_res('i', "scdi%puxX", ori, pft);
	ori = printf("ORI hex : \"%p\" \"%x\" \"%X\"\n", &ori,
			765482, 765482);
	pft = ft_printf("PFT hex : \"%p\" \"%x\" \"%X\"\n", &ori,
			765482, 765482);
	print_res('p', "scdi%puxX", ori, pft);
	main2();
	main3();
	main4();
ℹ Running tests: fsoares (my own tests)
Mandatory:
no format   : 1.OK 2.OK
% format    : 1.OK 2.OK 3.OK 4.OK 5.OK
c format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK
s format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK
p format    : 1.OK 2.OK 3.OK 4.OK 5.OK
d format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK
i format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK
u format    : 1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO
x format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK
 13.OK 14.OK
X format    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK
 13.OK 14.OK
random      : 1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO
13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO
26.KO 27.KO 28.KO 29.KO 30.KO 31.KO 32.KO 33.KO 34.KO 35.KO 36.KO 37.KO 38.KO
39.KO 40.KO 41.KO 42.KO 43.KO 44.KO 45.KO 46.KO 47.KO 48.KO 49.KO 50.KO 51.KO
52.KO 53.KO 54.KO 55.KO 56.KO 57.KO 58.KO 59.KO 60.KO 61.KO 62.KO 63.KO 64.KO
65.KO 66.KO 67.KO 68.KO 69.KO 70.KO 71.KO 72.KO 73.KO 74.KO 75.KO 76.KO 77.KO
78.KO 79.KO 80.KO 81.KO 82.KO 83.KO 84.KO 85.KO 86.KO 87.KO 88.KO 89.KO 90.KO
91.KO 92.KO 93.KO 94.KO 95.KO 96.KO 97.KO 98.KO 99.KO 100.KO
	max = 2147483647;
	min = max * -1 - 1;
	ori = printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 0, -1, 1, 9);
	pft = ft_printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 0, -1, 1, 9);
	print_res('i', "scdi%puxX", ori, pft);
	ori = printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 10, 11, 15, 16);
	pft = ft_printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 10, 11, 15, 16);
	print_res('i', "scdi%puxX", ori, pft);
	ori = printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 17, 99, 100, 101);
	pft = ft_printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", 17, 99, 100, 101);
	print_res('i', "scdi%puxX", ori, pft);
	ori = printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", -9, -10, -11, -14);
	pft = ft_printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", -9, -10, -11, -14);
	print_res('i', "scdi%puxX", ori, pft);
	ori = printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", -15, -16, 99, 0);
	pft = ft_printf("int: \"%i\"/\"%i\"/\"%i\"/\"%i\"\n", -15, -16, 99, 0);
	print_res('i', "scdi%puxX", ori, pft);
	ft_printf(" #########  hex errors #######\n");
	ori = printf("%x/%x\n", max, min);
	pft = ft_printf("%x/%x\n", max, min);

void	main3(void)
{
	int	ori;
	int	pft;

	ori = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, \
								LONG_MIN, (unsigned int) ULONG_MAX, 0, -42);
	pft = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, \
								LONG_MIN, (unsigned int) ULONG_MAX, 0, -42);
	print_res('x', "scdi%puxX", ori, pft);
	ori = printf("ORIx: \"%X\" \"%X\"\n", LONG_MAX, LONG_MIN);
	pft = ft_printf("ORIx: \"%X\" \"%X\"\n", LONG_MAX, LONG_MIN);
	print_res('x', "scdi%puxX", ori, pft);
	ori = printf("ORIx: \"%X\" \"%X\"\n", (unsigned int) ULONG_MAX, \
								(unsigned int) 9223372036854775807);
	pft = ft_printf("ORIx: \"%X\" \"%X\"\n", (unsigned int) ULONG_MAX, \
								(unsigned int) 9223372036854775807);
	print_res('X', "scdi%puxX", ori, pft);
	ft_printf("int max / min...\n");
	ori = printf("%X/a/%X/b/%X/c/\n", (unsigned int) ULONG_MAX, 0x0, -42);
	pft = ft_printf("%X/a/%X/b/%X/c/\n", (unsigned int) ULONG_MAX, 0x0, -42);
	print_res('X', "scdi%puxX", ori, pft);
}

*/