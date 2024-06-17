/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:33:45 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:28 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelength;
	int		j;

	needlelength = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[needlelength] != '\0' && needlelength < len)
	{
		if (haystack[needlelength] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[needlelength + j]
				&& needlelength + j < len
				&& haystack[needlelength + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + needlelength);
		}
		needlelength++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "ld";
    size_t len = 12; 
// Maximum number of characters to search within haystack
    char *result;

    // Test strnstr function
    result = ft_strnstr(haystack, needle, len);

    // Check the result
    if (result) {
        printf("Substring '%s' found at position: %ld\n", 
	needle, result - haystack);
    } else {
        printf("Substring '%s' not found within the 
	first %zu characters.\n", needle, len);
    }

    return 0;
}*/
