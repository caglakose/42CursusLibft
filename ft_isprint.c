/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:49:01 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:30 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main() {
    char test_chars[] = {' ', 'A', '~', '\n', '\t', 127, 125};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        if (ft_isprint(c)) {
            printf("The character '%c' is printable.\n", c);
        } else {
            printf("The character '%c' is not printable.\n", c);
        }
    }

    return 0;
}*/
