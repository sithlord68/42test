/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:03:52 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/05 11:20:23 by pascal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int		equstr(char *s1, char *s2, int nb);
int		minchar(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlen(char *str);
void	ft_strchr(char *x);
void	ft_strrchr(char *x);
void	ft_strncmp(char *x, char *y);
void	ft_strnstr(char *x);

void	testis(char *str, int c)
{
	printf("step testis \"%s\" \"%i\"\n", str, c);
	if (equstr(str, "isalpha", 20))
		printf("isalpha de %c: %i \n", c, ft_isalpha(c));
	if (equstr(str, "isdigit", 20))
		printf("isdigit de %c: %i \n", c, ft_isdigit(c));
	if (equstr(str, "isalnum", 20))
		printf("isalnum de %c: %i \n", c, ft_isalnum(c));
	if (equstr(str, "isascii", 20))
		printf("isascii de %c: %i \n", c, ft_isascii(c));
	if (equstr(str, "isprint", 20))
		printf("isprint de %c: %i \n", c, ft_isprint(c));
}

void	teststr(char *f, char *s1, char *s2)
{
	char	s3[20];
	size_t	res;

	printf("teststr \"%s\" \"%s\" \"%s\" \"%s\"\n", f, s1, s2, s3);
	if (equstr(f, "strlcpy", 20))
		res = ft_strlcpy(s3, s1, 10);
	if (equstr(f, "strlcat", 20))
		res = ft_strlcat(s1, s2, 10);
	if (equstr(f, "strlen", 20))
		res = ft_strlen(s1);
	if (equstr(f, "strchr", 20))
		ft_strchr(s1);
	if (equstr(f, "strrchr", 20))
		ft_strrchr(s3);
	if (equstr(f, "strncmp", 20))
		ft_strncmp(s1, s2);
	if (equstr(f, "strnstr", 20))
		ft_strnstr(s1);
	printf("fonction: %s\n", f);
	printf("s1:\"%s\"\ns2:\"%s\"\ns3:\"%s\"\nres:\"%zu\"\n", s1, s2, s3, res);
}
