/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:29:46 by jode-jes          #+#    #+#             */
/*   Updated: 2023/04/19 16:56:18 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
    printf("\n___________________________\n\n");
	printf("\nTest of all libft functions\n"); 
	printf("\n___________________________\n\n");
    //isalpha
    printf("\nTest of ft_isalpha letter a: \n return is %d \n", ft_isalpha('a'));
    printf("\nTest of isalpha letter a: \n return is %d \n", isalpha('a'));
    printf("\nTest of ft_isalpha: \n return is %d \n", ft_isalpha('1'));
    printf("\nTest of isalpha: \n return is %d \n", isalpha('1'));
	printf("\n_____________________\n\n");
	//isdigit
	printf("\nTest of ft_isdigit: \n return is %d \n", ft_isdigit('a'));
    printf("\nTest of isdigit: \n return is %d \n", isdigit('a'));
    printf("\nTest of ft_isdigit: \n return is %d \n", ft_isdigit('1'));
    printf("\nTest of isdigit: \n return is %d \n", isdigit('1'));
	printf("\n_____________________\n\n");
	//isalnum
	printf("\nTest of ft_isalnum: \n return is %d \n", ft_isalnum('+'));
    printf("\nTest of isalnum: \n return is %d \n", isalnum('+'));
    printf("\nTest of ft_isalnum: \n return is %d \n", ft_isalnum('1'));
    printf("\nTest of isalnum: \n return is %d \n", isalnum('1'));
	printf("\n_____________________\n\n");
	//isascii
	printf("\nTest of ft_isascii: \n return is %d \n", ft_isascii(128));
    printf("\nTest of isascii: \n return is %d \n", isascii(128));
    printf("\nTest of ft_isascii: \n return is %d \n", ft_isascii('1'));
    printf("\nTest of isascii: \n return is %d \n", isascii('1'));
	printf("\n_____________________\n\n");
	//isprint
	printf("\nTest of ft_isprint: \n return is %d \n", ft_isprint(128));
    printf("\nTest of isprint: \n return is %d \n", isprint(128));
    printf("\nTest of ft_isprint: \n return is %d \n", ft_isprint(49));
    printf("\nTest of isprint: \n return is %d \n", isprint(49));
	printf("\n_____________________\n\n");
	 //strlen
    printf("\nTest of ft_strlen word Hello: \n str lenght is %ld \n", ft_strlen("hello"));
    printf("\nTest of strlen word Hello: \n str lenght is %ld \n", strlen("hello"));
	printf("\n_____________________\n\n");
    return (0);
}