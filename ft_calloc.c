/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:53:43 by cakose            #+#    #+#             */
/*   Updated: 2024/06/14 13:47:11 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sizetotal;
	void	*mem;

	sizetotal = count * size;
	mem = malloc(sizetotal);
	if (!mem)
		return (NULL);
	ft_bzero(mem, sizetotal);
	return (mem);
}

/*
#include <stdio.h>

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr;
    size_t i;

    // Allocate memory using ft_calloc
    arr = (int *)ft_calloc(count, size);

    // Check if allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the allocated memory to ensure it is zeroed out
    printf("Allocated array elements initialized to zero:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}*/
