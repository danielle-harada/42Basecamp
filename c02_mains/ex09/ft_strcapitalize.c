/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:08:22 by dteixeir          #+#    #+#             */
/*   Updated: 2020/12/02 03:36:18 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verifica_char(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (verifica_char(str[i - 1]))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (verifica_char(str[i - 1]) == 0)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		verifica_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
