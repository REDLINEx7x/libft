CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_strlcat.c t_strlen.c t_tolower.c t_isalnum.c  ft_isascii.c 
ft_isprint.c  ft_strlcpy.c  ft_strncmp.c  ft_toupper.c
RM = rm -f

OBJS = $(SRCS:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:

clean:
	$(RM) $(OBJS)

fclean:

re: all clean
	



