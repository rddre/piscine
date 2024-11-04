/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:58:35 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/10 14:51:14 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;
	int	c;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		c = *(str + i);
		if (c < 32 || c > 126)
			result = 0;
		i++;
	}
	return (result);
}
