NAME	=	libft.a

SRCS	=	$(wildcard *.c)

HEADER	=	libft.h

OBJ		= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	= -Wall -Wextra -Werror -I $(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
		ar rcs $(NAME) $?

.c.o :	$(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re		:	fclean all

