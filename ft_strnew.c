/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:51:26 by frmarinh          #+#    #+#             */
/*   Updated: 2015/11/28 03:29:15 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tmp;
	int		i;

	tmp = malloc(sizeof(char*) * (int)size);
	i = 0;
	while (i < (int)size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
