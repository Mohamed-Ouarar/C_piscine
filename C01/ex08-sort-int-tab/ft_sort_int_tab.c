/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:14:45 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/11 10:40:32 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main()
{
	int tab[5] = {2, 1, 1, 3, 5};
	int size = 5;
	int loop;
	ft_sort_int_tab(tab, size);
	for(loop = 0; loop < size; loop++)
      printf("%d ", tab[loop]);
}
