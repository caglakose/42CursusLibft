/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:05:59 by cakose            #+#    #+#             */
/*   Updated: 2024/06/07 14:42:48 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (source < dest)
		while (++i <= len)
			dest[len - i] = source[len - i];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
/*
#include <stdio.h>
int main() {
    char source[] = "Hello, world!";
    char destination[20];

    // Test ft_memmove
    printf("Before ft_memmove:\n");
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    ft_memmove(destination, source, sizeof(source));

    printf("\nAfter ft_memmove:\n");
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/
