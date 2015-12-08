/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:04:32 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/26 23:12:26 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = malloc(sizeof(char*) * ft_strlen(str) + 1);
	while (str[i])
	{
		tmp[i] = f(i, str[i]);
		i++;
	}
	tmp[i] = '\0';
	if (ft_strlen(tmp))
		return (tmp);
	else
	{
		free(tmp);
		return (NULL);
	}
}
