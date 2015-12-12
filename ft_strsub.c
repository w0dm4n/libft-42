/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:49:45 by frmarinh          #+#    #+#             */
/*   Updated: 2015/12/12 04:51:50 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*tmp;
	size_t		i;
	size_t		wtf;
	size_t		size;

	i = 0;
	wtf = len;
	size = (len + start);
	if (wtf == 0)
		return (ft_strnew(1));
	else if (!wtf)
		return (NULL);
	if (!(tmp = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (start < size)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
