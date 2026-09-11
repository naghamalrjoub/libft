src := $(wildcard *.c)
obj := $(src:.c=.o)
CFLAG := -Wall -Werror -Wextra

libft.a: $(obj)
	ar -rsc libft.a $(obj)

ft_atoi.o: ft_atoi.c
	cc -c $(CFLAG) ft_atoi.c

