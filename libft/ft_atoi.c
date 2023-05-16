/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:31:00 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/16 11:13:28 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	count;
	int	result;

	sign = 1;
	count = 0;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			sign = sign * (-1);
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		result = (result * 10) + (*nptr - 48);
		nptr++;
	}
	return (result * sign);
}
/* int	main(void)
{
	const char nptr_1[] = " -  +1234";
	int result = ft_atoi(nptr_1);
	printf("\nchar converted to int: %d\n", result);

	char nptr_2[] = " -  +1234";
	printf("\nchar converted to int: %d\n\n", atoi(nptr_2));
	return (0);
} */