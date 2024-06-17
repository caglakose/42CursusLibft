/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:26:22 by cakose            #+#    #+#             */
/*   Updated: 2024/06/13 16:26:57 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (!i)
			{
				count++;
				i = 1;
			}
		}
		else
			i = 0;
		s++;
	}
	return (count);
}

static int	count_chars(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

static void	free_split(char **split, int count)
{
	while (count--)
		free(split[count]);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		new_index;

	if (!s)
		return (0);
	new_index = 0;
	new = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!new)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			new[new_index] = ft_substr(s, 0, count_chars(s, c));
			if (!new[new_index++])
				return (free_split(new, new_index - 1), free(new), NULL);
			s += count_chars(s, c);
		}
		else
			s++;
	}
	new[new_index] = NULL;
	return (new);
}
