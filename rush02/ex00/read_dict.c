/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycupper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:07:34 by ycupper           #+#    #+#             */
/*   Updated: 2024/09/21 16:59:21 by ycupper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void read_dict(char *filename)
{
    int file_open;

    file_open = open(filename, O_RDONLY);
    if (file_open == -1)
    {
        write(1, "dict Error\n", 11);
        return;
    }

    char buffer[1024];
    int file_read;

    file_read = read(file_open, buffer, 1024);
    while(file_read > 0)
	{	
       	write(1, buffer, file_read);
		break;
	}
	close(file_open);
}

int main()
{
    read_dict("numbers.dict");
    return (0);
}
