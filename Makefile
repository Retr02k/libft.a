NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra


run:
	cc -Wall -Werror -Wextra $(NAME)
	valgrind ./a.out