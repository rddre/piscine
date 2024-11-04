/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycupper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:42:22 by ycupper           #+#    #+#             */
/*   Updated: 2024/09/21 14:49:55 by ycupper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char	*str)
{
	int	i;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int	ac,	char	**av)
{
	if (ac == 2)
		ft_putstr("un argument detecte...conversion du nombre");
	else if (ac == 3)
		ft_putstr("deux argument detecte...chargement du dictionaire");		
	else 
		ft_putstr("error\n");
	return (0);
}	

