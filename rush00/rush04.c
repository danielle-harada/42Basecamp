/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:50:39 by gnorbert          #+#    #+#             */
/*   Updated: 2020/11/23 07:19:56 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char *c);  

char	g_first_char;
char	g_middle_char;
char	g_fill_char;
char	g_last_char;
int		g_counter_y;
int		g_counter_x;

void	ft_first_line(int x)
{
	g_counter_x = 0;
	while (g_counter_x < x)
	{
		if (g_counter_x == 0)
		{
			ft_putchar(&g_first_char);
		}
		else if (g_counter_x == x - 1)
		{
			ft_putchar(&g_last_char);
		}
		else
		{
			ft_putchar(&g_middle_char);
		}
		g_counter_x = g_counter_x + 1;
	}
}

void	ft_last_line(int x)
{
	g_counter_x = 0;
	while (g_counter_x < x)
	{
		if (g_counter_x == 0)
		{
			ft_putchar(&g_last_char);
		}
		else if (g_counter_x == x - 1)
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

void	ft_middle_line(int x)
{
	g_counter_x = 0;
	while (g_counter_x < x)
	{
		if (g_counter_x == 0 || g_counter_x == x - 1)
		{
			ft_putchar(&g_middle_char);
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
	g_first_char = 'A';
	g_middle_char = 'B';
	g_fill_char = ' ';
	g_last_char = 'C';
	while (g_counter_y < y)
	{
		if (g_counter_y == 0)
		{
			ft_first_line(x);
		}
		else if (g_counter_y == y - 1)
		{
			ft_last_line(x);
		}
		else
		{
			ft_middle_line(x);
		}
		ft_putchar("\n");
		g_counter_y = g_counter_y + 1;
	}
}
