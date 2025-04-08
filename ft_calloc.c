/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:46:34 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/08 10:50:58 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *) ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
// int	main(void)
// {
// 	int *arr;
//     int n = 5;

// 	printf("%p\n", ft_calloc(n, sizeof(int)));
// 	return (0);
// }
