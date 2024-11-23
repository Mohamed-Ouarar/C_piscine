/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:42:05 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/13 10:31:40 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int	total(char **strs, char *sep, int size)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len = total_len + len(strs[i]);
		i++;
	}
	total_len = total_len + len(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_of_them_all;
	char	*stor ;
	int		i;
	int		s;
	int		j;

	size_of_them_all = total(strs, sep, size);
	stor = malloc(sizeof(char) * (size_of_them_all + 1));
	i = -1;
	s = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			stor[s++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				stor[s++] = sep[j++];
	}
	stor[s] = '\0';
	return (stor);
}
/*
int main()
{
	char *strings[] = {"mohamed", "is", "my", "name"};
	int sz = 4;
	char se[] = "---";
	char *result = ft_strjoin(sz, strings, se);
	printf("%s", result);
	free(result);
}
*/
