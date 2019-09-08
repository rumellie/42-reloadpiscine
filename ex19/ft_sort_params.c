#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_printparam(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while(*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		if (i < argc)
			ft_putchar('\n');
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	//printf("%i\n", (s1[i] - s2[i]));
	return (s1[i]  - s2[i]);
}

/*void ft_swap(char *a, char *b)
{
	char *swap;

	swap = a;
	a = b;
	b = swap;
}*/

int main(int argc, char **argv)
{
	int flag;
	int i;
	char *swap;

	flag = 1;
	while(flag)
	{
		flag = 0;
		i = 1;
		while(i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				flag = 1;
				swap = argv[i];
				argv[i] = argv[i+1];
				argv[i + 1] = swap;
			}
			i++;
		}
		
	}
	ft_printparam(argc, argv);
	return (0);
}
