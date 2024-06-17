/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:06:10 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:24:56 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dupe;

	len = 0;
	while (s1[len])
		len++;
	dupe = (char *)malloc((len + 1) * sizeof(char));
	if (dupe == NULL)
		return (NULL);
	ft_memcpy(dupe, s1, len + 1);
	return (dupe);
}
