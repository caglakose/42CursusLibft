/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:30:18 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:14 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*
#include <stdio.h>
int main() {
    char lower = 'L';
    char upper;

    upper = ft_tolower(lower);

    printf("Uppercase: %c\n", lower);
    printf("Lowercase: %c\n", upper);

    return 0;
}*/
