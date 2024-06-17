/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:59:53 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:42 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		((unsigned char *)s)[c++] = 0;
	}
}
//
//#include <stdio.h>
//int main() {
//    char str[50];
//
//    for (int i = 0; i < sizeof(str) - 1; i++) {
//        str[i] = 'X';
//    }
//    str[sizeof(str) - 1] = '\0'; // Null terminate the string
//
//    printf("Before bzero: %s\n", str); 
// Output: Before bzero: XXXXXXXXXXXXXXXXXXXXXXXXX
//
// Zero out the str array using ft_bzero
//    ft_bzero(str, sizeof(str));
//
//    printf("After bzero: %s\n", str); // Output: After bzero:
//
//    return 0;
//}
