/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:55:11 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:20 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			count;
	unsigned char	*p;

	count = 0;
	p = (unsigned char *)ptr;
	while (count < num)
	{
		p[count] = (unsigned char)value;
		count++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main() {
    char str[50];

    // Fill the str array with '*' character using ft_memset
    ft_memset(str, '*', 10 * sizeof(char));

    printf("str after ft_memset: %s\n", str);  // Output: **********

    return 0;
}*/
