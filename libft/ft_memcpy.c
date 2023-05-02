/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:57:48 by jode-jes          #+#    #+#             */
/*   Updated: 2023/04/27 12:44:13 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (size--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}

/* int main()
	before ft_cpy: %s\n", dest);
	ft_memcpy(dest, src, size);
	printf("src string after ft_memcpy: %s\n", src);
	printf("dest string after ft_memcpy: %s\n\n", dest);
	
	const char src_1 [] = "Hello World";
	char dest_1 [8] = "1234567";
	size_t size_1 = sizeof(src);
	printf("src_1 string before cpy: %s\n", src_1);
	printf("dest_1 string before cpy: %s\n", dest_1);
	memcpy(dest_1, src_1, size_1);
	printf("src_1 string after memcpy: %s\n", src_1);
	printf("dest_1 string after memcpy: %s\n\n", dest_1);
	return (0);
} */