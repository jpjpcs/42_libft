/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:02:44 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/16 11:35:43 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last);
}

/* int main()
{
    char s1[] = "Hello World!";
    char s2[] = "alexandre";
    char *result;

    result = ft_strrchr(s1, 'l');
    printf("'%c' last occurence in '%s' is at position %ld\n", 'l', s1, result
		- s1);
    result = ft_strrchr(s1, 'o');
    printf("'%c' last occurence in '%s' is at position %ld\n", 'o', s1, result
		- s1);
    result = ft_strrchr(s1, 'x');
    printf("'%c' last occurence in '%s' is at position %p\n", 'x', s1, result);
    result = ft_strrchr(s2, 'x');
    printf("'%c' last occurence in '%s' is at position %p\n", 'x', s2, result);

    return (0);
} */