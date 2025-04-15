/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:49 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/15 17:48:47 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char *s, char c)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c || s[i] != c && i == 0)
			count++;
		i++;
	}
	return (count);
}
int	lettercount(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c || s[i] != c && i == 0)
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!str)
		return (NULL);
	while (i < wordcount(s, c))
	{
		*str[i] = malloc(sizeof(char) * (lettercount(s, c) + 1));
	}
	str[i] = NULL;
	return (str);
}
int	main(void)
{
	printf("%d\n", wordcount("salu vcgd   jndns shsy", ' '));

	return (0);
}
