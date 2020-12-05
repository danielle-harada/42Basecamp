/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 02:32:02 by dteixeir          #+#    #+#             */
/*   Updated: 2020/12/04 02:54:43 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int count;

	i = 1;
	count = 0;
	if (nb > 1)
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
				count++;
			i++;
		}
		if (count == 1)
			return (1);
	}
	return (0);
}
