/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:16:02 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/08 11:19:47 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	if (nb < 0)
		return (0);
	number = 1;
	while (nb > 0)
	{
		number = number * nb;
		nb--;
	}
	return (number);
}
