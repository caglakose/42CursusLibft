/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:51:17 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:42 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main() {
    const char *test_strings[] = {
        "Hello, world!",
        "",
        "A",
        "This is a longer string to test the function.",
        "1234567890"
    };

    int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);

    for (int i = 0; i < num_tests; i++) {
        const char *str = test_strings[i];
        printf("The length of the string \"%s\" is %zu.\n", str, ft_strlen(str));
    }

    return 0;
}*/
