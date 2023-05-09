/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:17:10 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/09 12:04:05 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int	main(void)
{
	int content_value = 42;                   // define the content value
	t_list *node = ft_lstnew(&content_value);
		// create a new node with the content value
	if (node == NULL)
	{ // check if ft_lstnew failed to create a new node
		printf("Failed to create a new node!\n");
		return (1);
	}
	printf("New node created successfully!\n");
	printf("Content value of the new node: %d\n", *(int *)(node->content));
		// print the content value of the new node
	return (0);
}
 */