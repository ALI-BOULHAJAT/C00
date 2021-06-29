/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:41:49 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/06/28 14:14:02 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb(void)
{
	char	P0;
	char	P1;
	char	P2;

	P0 = '0';
	while (P0 <= '7')
	{
		P1 = P0 + 1;
		while (P1 <= '9')
		{
			P2 = P1 + 1;
			while (P2 <= '9')
			{
				write (1, &P0, 1);
				write (1, &P1, 1);
				write(1, &P2, 1);
				if (P0 != '7' || P1 != '8' || P2 != '9')
					write(1, ", ", 2);
				P2++;
			}
			P1++;
		}
		P0++;
	}
}
