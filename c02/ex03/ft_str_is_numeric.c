/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:23:52 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/09 21:22:26 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;
	int	c;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		c = *(str + i);
		if (c < 48 || c > 57)
			result = 0;
		i++;
	}
	return (result);
}
