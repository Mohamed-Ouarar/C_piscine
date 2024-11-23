/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:32:50 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/13 14:35:37 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *st)
{
	int	i;

	i = 0;
	while (st[i])
		i++;
	return (i);
}

int	cmp(char *s1, char *s2, unsigned int x)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < x)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	len = ft_len(to_find);
	i = 0;
	if (len == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
			if (cmp(str + i, to_find, len) == 0)
				return (str + i);
		i++;
	}
	return (0);
}
