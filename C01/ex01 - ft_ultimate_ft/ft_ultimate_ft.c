/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:33:04 by mouarar           #+#    #+#             */
/*   Updated: 2024/08/11 15:34:20 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
*/
#include <stdio.h>
int main()
{
	int x = 10;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("%p\n", *p6);
	printf("%p\n", &p4);
	printf("%p\n", &p4);

}
