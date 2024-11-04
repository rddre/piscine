/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msochor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:29:49 by msochor           #+#    #+#             */
/*   Updated: 2024/09/08 17:21:28 by msochor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_firstlast(int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == n)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void	print_fill(int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (i == 1 || i == n)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			print_firstlast(x);
		}
		else
		{
			print_fill(x);
		}
		ft_putchar('\n');
		i++;
	}
}
