/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 06:16:15 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/27 21:37:47 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		where(char const *s, int pos, char c)
{
	int i;

	i = 0;
	while (s[pos])
	{
		if (pos == 0)
			if (s[pos] != c)
				return (pos);
		if (s[pos] == c)
		{
			i++;
			break ;
		}
		pos++;
	}
	return ((pos + i));
}

static int		char_nbr(char const *s, char c)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
			nbr++;
		i++;
	}
	return (nbr);
}

static int		next(char const *s, int pos, char c)
{
	int i;

	i = 0;
	while (s[pos])
	{
		if (s[pos] != c)
			pos++;
		else
			break ;
		i++;
	}
	return (pos);
}

static char		*get_from(char const *s, int start, int end)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	while (start < end)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		pos;
	int		nbr;
	char	*res;
	char	**tmp;
	int		occurence;

	pos = 0;
	occurence = 0;
	res = ft_strnew(ft_strlen(s));
	nbr = char_nbr(s, c) + 1;
	tmp = malloc(sizeof(char) * (ft_strlen(s) * ft_strlen(s)));
	while (nbr-- > 0)
	{
		pos = where(s, pos, c);
		res = get_from(s, pos, next(s, pos, c));
		if (res[0])
			tmp[occurence++] = res;
		if (pos == 0)
			pos++;
	}
	if (tmp)
		return (tmp);
	free(tmp);
	return (NULL);
}