/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:37:26 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/08 12:38:44 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_prime(int num)
{
	int	i;

	i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (find_prime(nb) && nb > 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
