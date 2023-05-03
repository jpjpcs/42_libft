/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:52:49 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/03 22:36:25 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	length;

	length = 0;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[length] != '\0')
		length++;
	if (start > length)
		len = 0;
	else if (len > length - start)
		len = length - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

/* int main ()
{
    char s[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;
    printf("\nstring is: %s\n\n", s);
    printf("substring is: %s\n\n", ft_substr(s, start, len));
    
    //Tests given by GPT:
    char *substr;
	// Test the ft_substr function
	substr = ft_substr(s, 7, 5);
	printf("%s\n", substr); // Output: world
	free(substr);

	substr = ft_substr(s, 0, 5);
	printf("%s\n", substr); // Output: Hello
	free(substr);

	substr = ft_substr(s, 7, 100);
	printf("%s\n", substr); // Output: world!
	free(substr);

	substr = ft_substr(s, 100, 5);
	printf("%s\n", substr); // Output: 
	free(substr);
    return (0);
} */