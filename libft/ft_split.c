/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:22:57 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/06 12:22:20 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count_words(char const *s, char c)
{   
    size_t c;
    size_t n_of_words;

    c = 0;
    n_of_words = 0;
    while (s[c] && s[c] == c)
        c++;
    while (s[c])
    {
        if (s[c] != c)
            n_of_words++;
        while ((s[c] && s[c] != c)
            c++;
        while ((s[c] && s[c] == c);
            c++; 
    }
    return(n_of_words);
}

size_t ft_count_letters(char const *s, char c, size_t w)
{
    size_t n_of_words;
    size_t c;
    size_t n_of_letters;
    
    n_of_words = 0;
    c = 0;
    while (s[c] && s[c] == c)
        c++;
    while (s[c]) && n_of_words != w)
    {
        if s[c] != c)
            n_of_words++;
        while (s[c] && s[c] != c)
            c++;
        while (s[c] && s[c] == c)
            c++;
    }
    //n_of_words = 0; obsoleto?
    n_of_letters = 0;
    while (s[c] && s[c] != c)
    {
        c++;
        n_of_letters ++;  
    }
    return(n_of_letters);
}

char **ft_split(char const *s, char c)
{
    char **new_array;
    size_t n_of_words;
    size_t w;
    
    n_of_words = (ft_count_words(s, c));
    new_array = (char*)malloc(sizeof(char *) * (n_of_words + 1));
    if (!new_array)
        return (NULL);
    w = 0;
    while(n_of_words > w)
    {   
        new_array[j] = (char *)malloc(sizeof(char))* (ft_count_letters(s, c, w) + 1))
        n_of_words--;
    }

    // i = 0 obsoleto?
    
}

int main()
{   
    char str [] = "a fred é fixe";
    char c [] = " ";
    printf("new list: %s",ft_split(str,c));
    return (0);
}

//c goes through each character (letter or space or other) in the loop of ft_count_words. 
//In ft_split, w goes through each word. Its a counter that compares the
//n_of_words (that returns of ft_n_of_words) and the w that starts in zero.