/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:21:37 by cakose            #+#    #+#             */
/*   Updated: 2024/06/11 15:23:57 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dest[dst_len] != '\0' && dst_len < size)
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dest[dst_len] != '\0' && dst_len < size)
		dst_len++;
	i = dst_len;
	while (src[dst_len - i] && dst_len + 1 < size)
	{
		dest[dst_len] = src[dst_len - i];
		dst_len++;
	}
	if (i < size)
		dest[dst_len] = '\0';
	return (i + ft_strlen(src));
	
}
*/
