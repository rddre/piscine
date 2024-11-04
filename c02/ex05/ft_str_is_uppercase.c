/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:31:47 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/10 14:26:20 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;
	int	c;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		c = *(str + i);
		if (c < 65 || c > 90)
			result = 0;
		i++;
	}
	return (result);
}
