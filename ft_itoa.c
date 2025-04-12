/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:23:33 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/12 17:39:05 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*new;
	int	sign;
	int l;
	int i;

	i = 0;
	l = ft_intlen(n);
	sign = 0;
	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	new = (char *) malloc(sizeof(char) * (l + sign + 1));
	if (!new)
		return (NULL);
	while (l != 0)
	{
		new[i] = n % 10 + '0';
		i++;
	}
	return (new);
}
int	main(void)
{
	printf("%s", ft_itoa(10));
	return (0);
}
