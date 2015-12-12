/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 06:21:41 by frmarinh          #+#    #+#             */
/*   Updated: 2015/12/12 05:12:56 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*set_array(int n, int len, long int i, char *tmp)
{
	long int n_tmp;

	if (n < -2147483647)
		return ("-2147483648");
	n_tmp = n;
	while (i)
	{
		n = (n / i);
		tmp[len] = ((char)n + 48);
		n = (n_tmp - (n * i));
		n_tmp = n;
		i = (i / 10);
		len++;
	}
	tmp[len] = '\0';
	return (tmp);
}

char		*ft_itoa(int n)
{
	int			negative;
	char		*tmp;
	int			len;
	long int	i;
	long int	n_tmp;

	i = 1;
	n_tmp = n;
	negative = 0;
	len = 1;
	if (n < 0 && (n = -n))
		negative = 1;
	while ((n_tmp = (n_tmp / 10)))
	{
		i = (i * 10);
		len++;
	}
	if (negative && (tmp = ft_strnew(len + 1)))
		tmp[0] = '-';
	else
		tmp = ft_strnew(len);
	len = 0;
	negative ? len++ : len;
	return (tmp = set_array(n, len, i, tmp));
}
