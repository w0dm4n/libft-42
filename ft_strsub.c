/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:49:45 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/28 03:49:35 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		size;
	int		i;
	int		wtf;

	i = 0;
	wtf = (int)len;
	if (wtf == 0)
		return (ft_strnew(1));
	else if (wtf < 0)
		return (NULL);
	size = (start + (unsigned int)len);
	tmp = malloc(sizeof(char*) * size + 1);
	while (start < (unsigned int)size)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	if (tmp)
		return (tmp);
	else
	{
		free(tmp);
		return (NULL);
	}
}
