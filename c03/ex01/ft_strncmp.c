/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:44:52 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/12 16:15:54 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n > i + 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
    
    printf("%d \n", ft_strncmp("qwerty", "qwerty", 5));
    return (0);
}*/
