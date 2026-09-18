#include "libft.h"
#include <stdio.h>

int main() {
	char str[] = "  hellooo  world";
	char **splitted = ft_split(str, ' ');
	int i = 0;
	while (splitted[i])
		printf("%s\n", splitted[i++]);
}
