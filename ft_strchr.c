/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:35:54 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/03 14:35:27 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
// int main(void)
// {
//     const char s[] = "hello";
//     int c = 'a';
//     char *result = ft_strchr(s, c);
//     if (result != NULL)
//     printf("C: '%c' a: %p, cu v: %c\n", c, result, *result);
//     else
//         printf("C '%c' not found.\n", c);
//     return 0;
// }
