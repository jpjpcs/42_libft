/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:22:57 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/06 02:32:19 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count_words(char const *s, char c)
{   
    size_t i;
    size_t n_of_words;

    i = 0;
    n_of_words = 0;
    while (s[i] && s[i] == c)
        i++;
    while (s[i])
    {
        if (s[i] != c)
            n_of_words++;
        while ((s[i] && s[i] != c)
            i++;
        while ((s[i] && s[i] == c);
            i++; 
    }
    return(n_of_words);
}


char **ft_split(char const *s, char c)
{
    char **new_array;
    size_t n_of_words;
    
    n_of_words = (ft_count_words(s, c));
    new_array = (char*)malloc(sizeof(char *) * (n_of_words + 1));  
    
}

int main()
{   
    char str [] = "a fred é fixe";
    char c [] = " ";
    printf("new list: %s",ft_split(str,c));
    return (0);
}