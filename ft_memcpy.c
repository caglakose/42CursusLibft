/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:01:02 by cakose            #+#    #+#             */
/*   Updated: 2024/06/07 16:36:04 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	if (destination == NULL && source == NULL)
		return (NULL);
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
/*
#include <stdio.h>
int main() {
    char src[] = "Hello, world!";
    char dest[20];

    // Copy the content of src to dest
    ft_memcpy(dest, src, sizeof(src));

    printf("Copied string: %s\n", dest); // Output: Copied string: Hello, world!

    return 0;
}*/
