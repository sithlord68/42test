/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:22:09 by pjolidon          #+#    #+#             */
/*   Updated: 2024/11/13 20:53:58 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		i;
	int		goon;
	char	*str;
	int		fd;

	goon = 1;
	i = argc - 1;
	fd = open(argv[i], 'r');
	while (goon)
	{
		str = get_next_line(fd);
		if (!str)
			goon = 0;
		else
			printf("String received:\n\"%s\"", str);
	}
	goon = close(fd);
	return (goon);
}
