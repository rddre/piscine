/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:52:31 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/05 16:30:20 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	o;
	char	p;

	o = 78;
	p = 80;
	if (n < 0)
		write(1, &o, 1);
	else
		write(1, &p, 1);
}
/* int main(void)
{
	ft_is_negative(5);
	return 0;
} */
