/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:41:37 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/13 19:41:15 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_unint(long long a, int *b)
{
	int	d;

	if (a < 0)
	{
		d = a;
		a = 4294967295 + d;
	}
	ft_pf_int(a, b);
}
