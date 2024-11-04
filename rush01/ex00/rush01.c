/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:42:53 by asaracut          #+#    #+#             */
/*   Updated: 2024/09/14 16:44:02 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on rajoute les reseource -------------------------------------------*/
#include <stdio.h>
#include <unistd.h>

/* le tableau a afficher a la fin -------------------------------------*/
int result[6][6] = {
    {-1, 1, 2, 3, 4, -1},
    {4, 0, 0, 0, 0, 1},
    {3, 0, 0, 0, 0, 2},
    {2, 0, 0, 0, 0, 3},
    {1, 0, 0, 0, 0, 4},
    {-1, 4, 3, 2, 1, -1}
};

/* partie ecriture du texte ------------------------------------------*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void    print_result(void)
{
    int i = 0;
    int a = 0;
    
    while (i < 6)
    {
        a = 0;  /* Réinitialiser 'a' à 0 pour chaque nouvelle ligne*/
        while (a < 6)
        {
            if (result[i][a] < 0)
                ft_putchar(' '); /* besoin de ca que pour les test de toute la table*/
            else
                ft_putnbr(result[i][a]); /* l'ellement a ecrire */
            ft_putchar(' ');
            a++;
        }
        ft_putchar('\n');
        i++;
    }
}

/* entrer les parametre dans la table -------------------------*/
void para_result(int argc, char **argv)
{
    int iarg; /* pour changer l'ellement dans argv*/
    int ires; /* pour changer l'element dans result*/
    int ipas; /* passer a un autre code de la table result*/
    int iresy;

    iresy = 0;
    iarg = 0;
    ipas = 1;
    ires = 1;
    while (ires < 5)
    {
        result[iresy][ires] = argv[1][iarg] - 48;
        iarg = iarg + 2;
        ipas++;
        if (ipas == 4)
        {
            iresy = 5;
            ires = 0;
        }
        ires++;
    }
}

void para_result2(int argc, char **argv)
{
    int iarg; /* pour changer l'ellement dans argv*/
    int ires; /* pour changer l'element dans result*/
    int ipas; /* passer a un autre code de la table result*/
    int iresy;

    iresy = 1;
    iarg = 0;
    ipas = 1;
    ires = 0;
    while (iresy < 5)
    {
        result[iresy][ires] = argv[1][iarg + 16] - 48;
        iarg = iarg + 2;
        ipas++;
        if (ipas == 4)
        {
            iresy = 1;
            ires = 5;
        }
        iresy++;
    }
}

/* verification de l'input */
void para_verifi(int argc, char **argv)
{
    int i = 0;
 
    while (argv[1][i] != '\0')
    {
        if (i % 2 == 0)
        {
            if (argv[1][i] < '1' || argv[1][i] > '4')
            {
                ft_putstr("\n\nErreur : ce ne sont pas des chiffre entre 1 et 4\n\n\n");
                return;
            }
        }
        else
        {
            if (argv[1][i] != ' ')
            {
                ft_putstr("\n\nErreur : il y a pas d'espace entre les chiffre\n\n\n");
                return;
            }
        }
        i++;
    }
}

// main du programe -------------------------------------------
int main(int argc,char **argv)
{
    if (argc != 2)
    {
        ft_putstr("\n\nErreur : nombre de parametres incorrect\n\n\n");
    }
    para_verifi(argc, argv);
    para_result(argc, argv);/* met les paramettre dans la table */
    para_result2(argc, argv);
    /*calcul_reponse(); // calcul de quoi et ou mettre */
    print_result(); /* print la table en entier, pas juste ce qu'il faut0 */
    return (0);
}