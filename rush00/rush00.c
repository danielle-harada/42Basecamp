/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnorbert <gnorbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:50:39 by gnorbert          #+#    #+#             */
/*   Updated: 2020/11/22 23:14:09 by gnorbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char *c);

char	g_first_char;
char	g_middle_char;
char	g_fill_char;
char	g_below_char;
int		g_counter_y;
int		g_counter_x;

void	ft_first_line(int x)
{
	g_counter_x = 0;
	while (g_counter_x < x)
	{
		if (g_counter_x == 0 || g_counter_x == x - 1)
		{
			ft_putchar(&g_first_char);
		}
		else
		{
			ft_putchar(&g_middle_char);
		}
		g_counter_x = g_counter_x + 1;
	}
}

void	ft_below_line(int x)
{
	g_counter_x = 0;
	while (g_counter_x < x)
	{
		if (g_counter_x == 0 || g_counter_x == x - 1)
		{
			ft_putchar(&g_below_char);
		}
		else
		{
			ft_putchar(&g_fill_char);
		}
		g_counter_x = g_counter_x + 1;
	}
}

void	rush(int x, int y)
{
	g_first_char = 'o';
	g_middle_char = '-';
	g_fill_char = ' ';
	g_below_char = '|';
	while (g_counter_y < y)
	{
		if (g_counter_y == 0 || g_counter_y == y - 1)
		{
			ft_first_line(x);
		}
		else
		{
			ft_below_line(x);
		}
		ft_putchar("\n");
		g_counter_y = g_counter_y + 1;
	}
}
