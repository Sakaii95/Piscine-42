/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 17:12:35 by tmarx             #+#    #+#             */
/*   Updated: 2019/07/07 20:55:59 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long n;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}
