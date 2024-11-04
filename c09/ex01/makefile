SRC         = $(wildcard ft_*.c)
OBJS        = $(SRC:.c=.o)
NAME        = libft.a
CC          = gcc
AR          = ar rc
RM          = rm -f
CFLAGS      = -Wall -Wextra -Werror

all:        $(NAME)

$(NAME):    $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:         fclean all
