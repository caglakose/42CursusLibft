/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:30:18 by cakose            #+#    #+#             */
/*   Updated: 2024/06/07 14:36:35 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main() {
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, World!";
    int result;

    // Test ft_memcmp function
    result = ft_memcmp(str1, str2, 13); 
// Compare the first 13 bytes of str1 and str2

    // Check the result
    if (result == 0) {
        printf("The memory blocks are equal.\n");
    } else if (result < 0) {
        printf("The first memory block is less 
	than the second memory block.\n");
    } else {
        printf("The first memory block is greater 
	than the second memory block.\n");
    }

    return 0;
}*/
