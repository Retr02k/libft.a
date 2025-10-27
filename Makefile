NAME = libft.a
CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME): ft_atoi.o\
		 ft_bzero.o\
		 ft_calloc.o\
		 ft_isalnum.o\
		 ft_isalpha.o\
		 ft_isascii.o\
		 ft_isdigit.o\
		 ft_isprint.o\
		 ft_memcpy.o\
		 ft_memmove.o\
		 ft_memset.o\
		 ft_split.o\
		 ft_strchr.o\
		 ft_strdup.o\
		 ft_strjoin.o\
		 ft_strlcat.o\
		 ft_strlcpy.o\
		 ft_strlen.o\
		 ft_strncmp.o\
		 ft_strnstr.o\
		 ft_strrchr.o\
		 ft_strtrim.o\
		 ft_substr.o\
		 ft_tolower.o\
		 ft_toupper.o\

ft_atoi.o: ft_atoi.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_bzero.o: ft_bzero.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_calloc.o: ft_calloc.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_isalnum.o: ft_isalnum.c libft.h
	cc $(CFLAGS) -c -o $@ $<
	
ft_isalpha.o: ft_isalpha.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_isascii.o: ft_isascii.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_isdigit.o: ft_isdigit.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_isprint.o: ft_isprint.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_memcpy.o: ft_memcpy.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_memmove.o: ft_memmove.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_memset.o: ft_memset.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_split.o: ft_split.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strchr.o: ft_strchr.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strdup.o: ft_strdup.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strjoin.o: ft_strjoin.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strlcat.o: ft_strlcat.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strlcpy.o: ft_strlcpy.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strlen.o: ft_strlen.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strncmp.o: ft_strncmp.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strnstr.o: ft_strnstr.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strrchr.o: ft_strrchr.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_strtrim.o: ft_strtrim.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_substr.o: ft_substr.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_tolower.o: ft_tolower.c libft.h
	cc $(CFLAGS) -c -o $@ $<

ft_toupper.o: ft_toupper.c libft.h
	cc $(CFLAGS) -c -o $@ $<

run:
	cc -Wall -Werror -Wextra $(NAME)
	valgrind ./a.out

clean:
	rm -fr *.o
	rm -fr ./a.out

fclean: clean
	rm -fr libft.a
	 
re: fclean all