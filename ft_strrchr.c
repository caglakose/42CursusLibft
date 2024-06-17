/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:38:55 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:23 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;
	int	i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	i = length;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    const char *str = "Hello, world!";
    char ch = 'l';
    char *result;

    result = ft_strrchr(str, ch);  // Use the custom ft_strrchr

    if (result) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}*/
