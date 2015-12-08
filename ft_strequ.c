/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:13:29 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/27 00:33:04 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s1);
	if (s1 && s2)
	{
		while (*s1 && *s2 && *s1++ == *s2++)
			i++;
	}
	else
		return (0);
	if (i == len)
		return (1);
	else
		return (0);
}
