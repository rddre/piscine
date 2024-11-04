/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:31:42 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/05 14:20:40 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c != 123)
	{
		write(1, &c, 1);
		c++;
	}
}
/* int main(void)
{
	ft_print_alphabet();
	return 0;
} */
