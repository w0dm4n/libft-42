/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:41:22 by frmarinh          #+#    #+#             */
/*   Updated: 2015/12/08 03:54:47 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	char test[50] = "chiant.h chiant.h chwnt.h chiunt.h";
	char *res;

	res = ft_str_replace(test, ".h", ".o");
	ft_putstr(res);
	return (0);
}
