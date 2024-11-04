/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:27:00 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/05 14:41:12 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c != 96)
	{
		write(1, &c, 1);
		c--;
	}
}

/* int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
} */
