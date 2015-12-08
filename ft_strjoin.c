/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 02:58:10 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/27 22:53:46 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*tmp;
	int		i2;

	i = -1;
	i2 = 0;
	tmp = malloc(sizeof(char*) * ((ft_strlen(s1) + ft_strlen(s2))) + 1);
	while (i++ < (int)(ft_strlen(s1) + ft_strlen(s2)))
	{
		if (i < (int)ft_strlen(s1))
			tmp[i] = s1[i];
		else
		{
			tmp[i] = s2[i2];
			i2++;
		}
	}
	tmp[(i + i2)] = '\0';
	if (tmp)
		return (tmp);
	else
	{
		free(tmp);
		return (NULL);
	}
}
