src := $(wildcard *.c)
obj := $(src:.c=.o)
CFLAG := -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

$(NAME): $(obj)
	ar -rsc $(NAME) $(obj)

%: %.o
	cc $< -o $@

%.o: %.c
	cc -c $(CFLAG) $<

clean:
	rm -f $(obj)

fclean:
	rm -f $(NAME)

re:
	rm -f $(obj) $(NAME)
