/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:02:04 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/10 20:39:15 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	array = (int *) malloc(sizeof(int) * size);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
