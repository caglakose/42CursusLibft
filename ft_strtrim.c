/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:16:35 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 13:16:49 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	control(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*starting_point;
	const char	*ending_point;
	char		*trim;
	size_t		length;

	if (s1 == 0 || set == 0)
		return (NULL);
	starting_point = s1;
	ending_point = s1 + ft_strlen(s1) - 1;
	while (*starting_point && control(*starting_point, set))
	{
		starting_point++;
	}
	while (ending_point >= starting_point && control(*ending_point, set))
	{
		ending_point--;
	}
	length = ending_point - starting_point + 1;
	trim = (char *)malloc(length + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, starting_point, length);
	trim[length] = '\0';
	return (trim);
}
