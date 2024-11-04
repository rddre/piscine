/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:47:41 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/21 20:12:29 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

void	last_word(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == ' ')
		i--;
	while (str[i] >= 'a' && str[i] <= 'z' 
		|| str[i] >= 'A' && str[i] <= 'Z')
	{
		write(1, &str[i], 1);
		i--;
	}
}

// ft_split          faut le faire pour partager a chaque fois qu'il y a un \n  mais je crois qu'il y a plus simple
// au lieu de le faire j'ai mis juste la condition avec \n dans main


void	tab_write(char *str)
{
	int i;
	char tab[200][200]; // va falloir la stocker autre par comme variable global, c'est faux ce que j'ai ecrit
	int j;

	// dictionaire j'ai pas compris comment utiliser la function de lecture desole

	j = 0;
	i = 0; 
	while ( dict[i] != '\n' /* le texte dictionaire n'est pas fini */)
	{

		if (dict[i] != '\n')
			tab[j][i2] = dict[i];
		i2++;
		if (dict[i] == '\n')
		{
			j++;
			i2 = 0;
		}
		i++;
	}
	return ;
}