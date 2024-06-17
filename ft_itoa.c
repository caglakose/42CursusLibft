/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:29:55 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:25:27 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int num)
{
	int		len;

	len = 0;
	if (num <= 0)
	{
		len = 1;
	}
	while (num)
	{
		len++;
		num = num / 10;
		if (num == 0)
			break ;
	}
	return (len);
}

static char	*num_maker(int n, int len, int num, char *str)
{
	while (len >= 0)
	{
		num = n % 10;
		str[len--] = num + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		num;
	int		sign;

	num = 0;
	len = int_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str[len--] = '\0';
	num_maker(n, len, num, str);
	if (sign == -1 && str[0] == '0')
		str[0] = '-';
	return (str);
}
/*
int main(void) {
    int numbers[] = {12345, -9876, 0, -2147483648, 2147483647};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_itoa(numbers[i]);
        if (result) {
            printf("Number: %d, String: %s\n", numbers[i], result);
            free(result);
        } else {
            printf("Memory allocation failed for number: %d\n", numbers[i]);
        }
    }

    return 0;
}
*/
