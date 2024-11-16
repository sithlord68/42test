/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:05:45 by pjolidon          #+#    #+#             */
/*   Updated: 2024/11/12 01:16:58 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# define CHAR_BIT 8
# define SCHAR_MIN -128
# define SCHAR_MAX 127
# define UCHAR_MAX 255
# define CHAR_MIN -128
# define CHAR_MAX 127
# define MB_LEN_MAX 5
# define SHRT_MIN -32768
# define SHRT_MAX 32767
# define USHRT_MAX 65535
# define INT_MIN -2147483647
# define INT_MAX 2147483647
# define UINT_MAX 4294967295
# define LONG_MIN -2147483647
# define LONG_MAX 2147483647
# define ULONG_MAX 4294967295

void	goprint(char *str, char type, va_list args);
void	go2print(char *str, char type, va_list args);
void	print_res(char type, char *thandled, int ori, int pft);

#endif
