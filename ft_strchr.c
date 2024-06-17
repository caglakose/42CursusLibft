/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:33:37 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 13:26:08 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
//
//char	*ft_strchr(const char *s, int c)
//{
//	while (*s != '\0')
//	{
//		if (*s == (char)c)
//		{
//			return ((char *)s);
//		}
//		s++;
//	}
//	if (c == '\0')
//	{
//		return ((char *)s);
//	}
//	return (NULL);
//}
/*
#include <stdio.h>
int main() {
    const char *str = "Hello, world!";
    char ch = ' ';
    char *result;

    result = strchr(str, ch);

    if (result) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}*/
