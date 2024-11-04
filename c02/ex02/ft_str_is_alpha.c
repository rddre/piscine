/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:36:51 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/10 14:16:35 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		c = *(str + i);
		if (c < 65 || (c > 90 && c < 97) || c > 122)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
