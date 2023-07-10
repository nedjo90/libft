/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:33:34 by nhan              #+#    #+#             */
/*   Updated: 2023/07/10 14:29:03 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 97 - 65;
	}
	return (c);
}

int main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[1][i])
	{
		argv[1][i] = ft_tolower(argv[1][i]);
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
