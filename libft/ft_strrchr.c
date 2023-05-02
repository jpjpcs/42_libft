/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:02:44 by jode-jes          #+#    #+#             */
/*   Updated: 2023/04/28 20:34:39 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
    int len;
    int i;

    len = strlen(s);
    i = len - 1;
    while (i >= 0)
    {
        if ((&(s[i]) == c)
            return ((char *)s);
        i--;
    }
    if (*s == c)
        return ((char *)s);
    return (NULL);    
}

int main()
{
    char str[] = "hello world";
    char *ptr2 = strrchr(str, 'l');
    printf("ptr2 points to %c\n", *ptr2); 
    return (0);
}