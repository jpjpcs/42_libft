/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:31:00 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/03 13:14:57 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	count;
	int	result;

	i = 0;
	sign = 1;
	count = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 43 || str[i] == 45)
		{
			count++;
			if (count > 1)
				return (0);
			if (str[i] == 45)
				sign = sign * (-1);
			i++;
		}
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
/* int main ()
{
    const char str_1[] = "   --1234";
    int result = ft_atoi(str_1);
    printf("\nchar converted to int: %d\n", result);

    char str_2[] ="   --1234";
    printf("\nchar converted to int: %d\n\n", atoi(str_2));
    return (0);  
} */