/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:44:04 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/06/28 10:54:16 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'P';
	y = 'N';
	if (n >= 0)
		write (1, &x, 1);
	else
		write(1, &y, 1);
}
