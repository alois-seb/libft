CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_calloc.c ft_isascii.c ft_memccpy.c ft_memcpy.c	ft_strchr.c	ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strdup.c	ft_strlen.c	ft_strrchr.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ) libft.h
	ranlib $(NAME)

.c.o : 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
