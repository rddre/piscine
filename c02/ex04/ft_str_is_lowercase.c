/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:27:02 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/09 21:30:41 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;
	int	c;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		c = *(str + i);
		if (c < 97 || c > 122)
			result = 0;
		i++;
	}
	return (result);
}
