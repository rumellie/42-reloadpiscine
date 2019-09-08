/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:36:38 by ecelsa            #+#    #+#             */
/*   Updated: 2019/07/10 18:52:30 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int p;

	p = 1;
	if (argc > 1)
	{
		while (p < argc)
		{
			i = 0;
			while (argv[p][i] != '\0')
			{
				ft_putchar(argv[p][i]);
				i++;
			}
			ft_putchar('\n');
			p++;
		}
	}
	return (0);
}
