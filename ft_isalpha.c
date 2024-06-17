/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:26:59 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:36 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main()
{
    char test_chars[] = {'a', 'Z', '5', '#', 'm'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        if (ft_isalpha(c)) {
            printf("The character '%c' is an alphabetic character.\n", c);
        } else {
            printf("The character '%c' is not an alphabetic character.\n", c);
        }
    }

    return 0;
}*/
