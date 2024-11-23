/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:42:54 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/15 11:22:09 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*stcpy(char *src)
{
	int			i;
	char		*copy;
	int			len;

	i = 0;
	len = ft_strlen(src);
	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*scts;

	i = 0;
	scts = malloc((ac + 1) * sizeof(t_stock_str));
	if (scts == NULL)
		return (NULL);
	while (i < ac)
	{
		scts[i].size = ft_strlen(av[i]);
		scts[i].str = av[i];
		scts[i].copy = stcpy(av[i]);
		i++;
	}
	scts[i].str = 0;
	return (scts);
}
