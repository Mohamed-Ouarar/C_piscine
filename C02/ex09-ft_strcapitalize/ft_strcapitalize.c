/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:12:04 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/11 16:31:58 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_low(char *st)
{
	int	i;

	i = 0;
	while (st[i])
	{
		if (st[i] >= 'A' && st[i] <= 'Z')
			st[i] = st[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	condition;

	i = 0;
	condition = 1;
	make_low(str);
	while (str[i])
	{
		if (condition && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			condition = 0;
		}
		else if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
			condition = 1;
		else
			condition = 0;
		i++;
	}
	return (str);
}
