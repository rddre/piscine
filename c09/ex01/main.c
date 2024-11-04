#include "libft.h"  // Inclut les définitions de ta bibliothèque

// Note: <stdio.h> est déjà inclus via libft.h, donc pas besoin de le réinclure ici.

int main(void)
{
    // Test de ft_putstr suivi de puts pour comparaison
    ft_putstr("ft_putstr test: Hello, world!");
    write(1, "\n", 1);  // Nouvelle ligne
    puts("puts test: Hello, world!");  // Utilisation de puts
    write(1, "\n", 1);  // Nouvelle ligne après le test de puts

    return 0;
}

