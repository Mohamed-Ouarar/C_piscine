/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:30:50 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/12 20:37:24 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sort(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putstr(char *string)
{
	int	i;

	i = -1;
	while (string[++i])
		write(1, &string[i], 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (sort(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
			}
			i++;
		}
		j++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
