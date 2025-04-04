/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:54:44 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/04 15:15:56 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*b;
	unsigned char	*l;
	size_t			i;
	size_t 			j;

	b = (unsigned char *) big;
	l = (unsigned char *) little;
	i = 0;
	j = 0;
	if (l[0] == '\0')
			return ((char *) b);
	while (b[i] && i < len)
	{
		while (b[i + j] == l[j] &&(i + j < len))
		{
			j++;;
		}
	}
	return (NULL);
}
int	main(void)
{
	const char big[] = "hello";
	const char little[] = "ll";
	printf("%p caracterul: %c\n", ft_strnstr(big, little, 4));
	return (0);
}
