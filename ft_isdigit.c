/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:30:54 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:32 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main() {
    char test_chars[] = { '5', '5', '9', 'a', 'Z', '#'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        if (ft_isdigit(c)) {
            printf("The character '%c' is a digit.\n", c);
        } else {
            printf("The character '%c' is not a digit.\n", c);
        }
    }

    return 0;
}*/
