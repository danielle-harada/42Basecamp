/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:11:37 by dteixeir          #+#    #+#             */
/*   Updated: 2020/12/03 03:07:07 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (to_find[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (to_find[i] != str[j])
				j++;
			else
			{
				i++;
				j++;
				return (&str[j - i]);
			}
		}
		j++;
	}
	i++;
	return (0);
}
