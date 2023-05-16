/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:21:50 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/16 11:40:23 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (i + j);
}

/* int main()
{
    char src[] = "Hello";
    char dest[] = "World!";
    size_t dstsize = 6;
    printf("\ndest before ft_strlcat: %s\n\n", dest);
    ft_strlcat(dest, src, dstsize);
    printf("dest after ft_strlcat: %s\n\n", dest);
    printf("length of dst plus the length of src after ft_strlcat: %zu\n\n",
		strlen("World!Hello"));
    
    return(0);
} */