/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:12:26 by pjolidon          #+#    #+#             */
/*   Updated: 2024/11/12 01:17:05 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "test.h"

void	print_res(char type, char *thandled, int ori, int pft)
{
	int	i;

	i = 0;
	while (thandled[i])
		if (type == thandled[i++])
			printf ("##### Nbcar printf/ft_printf: [%i]/[%i]\n", ori, pft);
}

void	go2print(char *str, char type, va_list args)
{
	int		ori;
	int		pft;

	if (type == 's')
	{
		ori = printf(str, va_arg(args, char *));
		ft_putstr("ft_printf\t: ");
		pft = ft_printf(str, va_arg(args, char *));
	}
	if (type == '%' || type == 'c')
	{
		ori = printf(str, va_arg(args, int));
		ft_putstr("ft_printf\t: ");
		pft = ft_printf(str, va_arg(args, int));
	}
	print_res(type, "s%c", ori, pft);
}

void	goprint(char *str, char type, va_list args)
{
	int		ori;
	int		pft;

	printf("\nprintf\t\t: ");
	if (type == 'u' || type == 'x' || type == 'X')
	{
		ori = printf(str, va_arg(args, unsigned int));
		ft_putstr("ft_printf\t: ");
		pft = ft_printf(str, va_arg(args, unsigned int));
	}
	if (type == 'p')
	{
		ori = printf(str, va_arg(args, unsigned long long));
		ft_putstr("ft_printf\t: ");
		pft = ft_printf(str, va_arg(args, unsigned long long));
	}
	if (type == 'i' || type == 'd')
	{
		ori = printf(str, va_arg(args, int));
		ft_putstr("ft_printf\t: ");
		pft = ft_printf(str, va_arg(args, int));
	}
	print_res(type, "uxXpid", ori, pft);
}
