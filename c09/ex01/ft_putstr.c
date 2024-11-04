/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:58:43 by asaracut          #+#    #+#             */
/*   Updated: 2024/10/13 23:38:38 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(const char *str)
{
    while (*str)  // Parcourt la chaîne jusqu'au caractère nul
    {
        write(1, str, 1);  // Écrit le caractère courant
        str++;  // Passe au caractère suivant
    }
}
