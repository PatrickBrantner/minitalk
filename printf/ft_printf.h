/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:54:03 by pbrantne          #+#    #+#             */
/*   Updated: 2022/11/10 19:55:40 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(long long n);
int	ft_convert(unsigned long long num);
int	ft_convert_lower(unsigned long long num);
int	ft_hexptr(unsigned long long num);

#endif
