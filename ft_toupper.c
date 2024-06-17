/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:25:24 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:08 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
#include <stdio.h>
int main() {
    char lower = 'd';
    char upper;

    upper = toupper(lower);

    printf("Lowercase: %c\n", lower);
    printf("Uppercase: %c\n", upper);

    return 0;
}*/
