/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:19:55 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:49 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
    #include <stdio.h>
    int main() {
    char src[] = "Hello, world!"; // Source string
    char dst[20];                 // Destination buffer
    
    // Copy src to dst using ft_strlcpy
    unsigned int copied_length = ft_strlcpy(dst, src, sizeof(dst));
    
    // Print the copied string
    printf("Copied string: %s\n", dst);
    
    // Print the length of the source string
    printf("Length of source string: %u\n", copied_length);

    return 0;
}*/
