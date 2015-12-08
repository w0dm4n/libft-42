/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:42:03 by frmarinh          #+#    #+#             */
/*   Updated: 2015/12/07 22:49:17 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*tmp;
	int		i;

	i = 0;
	if (s)
	{
		tmp = malloc(sizeof(char) * ft_strlen(s) + 1);
		while (s[i])
		{
			tmp[i] = s[i];
			i++;
		}
		tmp[i] = '\0';
	}
	else
		return (NULL);
	if (tmp)
		return (tmp);
	else
	{
		free(tmp);
		return (NULL);
	}
}
