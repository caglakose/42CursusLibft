/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:14:48 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:24:43 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		space_s1;
	int		space_s2;
	char	*tmp_s3;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	space_s1 = ft_strlen(s1);
	space_s2 = ft_strlen(s2);
	tmp_s3 = (char *)malloc(space_s1 + space_s2 + 1);
	if (!tmp_s3)
		return (NULL);
	while (i < space_s1 || i < space_s2)
	{
		if (i < space_s1)
			tmp_s3[i] = s1[i];
		if (i < space_s2)
			tmp_s3[i + space_s1] = s2[i];
		i++;
	}
	tmp_s3[space_s1 + space_s2] = '\0';
	return (tmp_s3);
}
