/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:53:29 by mouarar           #+#    #+#             */
/*   Updated: 2024/07/26 11:22:15 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char q, char w)
{
	char	m;
	char	n;
	char	g;
	char	j;

	m = q / 10 + 48;
	n = q % 10 + 48;
	g = w / 10 + 48;
	j = w % 10 + 48;
	write(1, &m, 1);
	write(1, &n, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &j, 1);
	if (!(q == 98 && w == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
