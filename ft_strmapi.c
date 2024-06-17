/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:32:52 by cakose            #+#    #+#             */
/*   Updated: 2024/06/07 14:53:57 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc (ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <ctype.h>


char to_uppercase_with_index(unsigned int index, char c) {
    if (index % 2 == 0) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}

int main() {
    char *input = "hello, world!";
    char *result = ft_strmapi(input, to_uppercase_with_index);

    if (result) {
        printf("Original: %s\n", input);
        printf("Modified: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/
