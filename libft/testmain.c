/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:11:52 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/05 11:52:49 by pascal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	testis(char *str, int c);
void	teststr( char *s, char *s1, char *s2);

void	testmem( char *s, char *s1, char *s2);
void	testto( char *s);
int		minchar(int c);
int		equstr(char *s1, char *s2, int nb);

int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc < 3)
	{
		printf("params missing: 1=function_name 2-99=string[s]_to_test\n");
		return (42);
	}
	i = 2;
	while (i < argc)
	{
		c = argv[i][0];
		if (equstr(argv[1], "is", 2))
			testis(argv[1], c);
		else if (equstr(argv[1], "to", 2))
			testto(argv[1]);
		else if (equstr(argv[1], "str", 3))
			teststr(argv[1], argv[i], argv[i + 1]);
		else if (equstr(argv[1], "mem", 3))
			testmem(argv[1], argv[i], argv[i + 1]);
		i++;
	}
	return (1);
}
