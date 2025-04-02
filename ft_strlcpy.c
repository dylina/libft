/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:26:53 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/02 12:47:26 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
// int	main(void)
// {
// 	char dest[5] = "xxxx";
// 	const char src[] = "abcdefgh";

// 	printf("avant: %s\n", dest);
// 	ft_strlcpy(dest, src, 4);
// 	printf("apres: %s\n", dest);
// 	return (0);
// }
