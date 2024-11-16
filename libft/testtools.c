/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testtools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:39:17 by pascal            #+#    #+#             */
/*   Updated: 2024/10/05 11:08:00 by pascal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minchar(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	equstr(char *s1, char *s2, int nb)
{
	int		res;
	int		i;

	res = 1;
	i = 0;
	while (res && s1[i] && s2[i] && i < nb)
	{
		if (minchar(s1[i]) != minchar(s2[i]))
			res = 0;
		else
			i++;
	}
	if (minchar(s1[i]) != minchar(s2[i]) && i < nb)
		res = 0;
	return (res);
}
