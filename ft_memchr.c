/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:24:09 by cakose            #+#    #+#             */
/*   Updated: 2024/06/07 14:34:48 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    const char *result;

    // Test ft_memchr function
    result = ft_memchr(str, ch, 12);
// Search for 'o' within the first 12 bytes

    // Check the result
    if (result) {
        printf("Character '%c' found at position: %ld\n", 
	ch, (size_t)(result - str));
    } else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}*/
