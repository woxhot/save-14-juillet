/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 01:38:27 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/09 09:28:43 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_line(char first, char last, char between, int lenght)
{
	int	curs;

	curs = 1;
	while (curs <= lenght)
	{
		while ((curs != 1) && (curs < lenght))
		{
			ft_putchar(between);
			curs++;
		}
		if (curs == 1)
			ft_putchar(first);
		if (curs == 1)
			curs++;
		if (curs == lenght)
			ft_putchar(last);
		if (curs == lenght)
			curs++;
	}
	ft_putchar('\n');
	return (0);
}

void	rush03(int x, int y)
{
	int	curs2;

	curs2 = 1;
	while (curs2 <= y)
	{
		while ((curs2 != 1) && (curs2 < y))
		{
			ft_line('B', 'B', ' ', x);
			curs2++;
		}
		if ((curs2 == 1) || (curs2 == y))
			ft_line('A', 'C', 'B', x);
		curs2++;
	}
}
