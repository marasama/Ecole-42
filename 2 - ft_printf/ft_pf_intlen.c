/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_intlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:06 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/13 19:31:30 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_intlen(long long a)
{
	int	b;

	b = 0;
	if (a < 0)
	{
		a = -a;
		b++;
	}
	while ((a / 10) != 0)
	{
		a /= 10;
		b++;
	}
	return (b + 1);
}
