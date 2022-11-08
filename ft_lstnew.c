/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:25:57 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/08 15:14:19 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*t_list	*ft_lstnew(void *content)
{

}*/

struct node
{
	int value;
	struct node* next;
};

typedef struct node node_t;

void	printlist(node_t *head)
{
	node_t *temporary = head;

	while (temporary != NULL)
	{
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}

node_t	*create_new_node(int value)
{
	node_t	*result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return (result);
}

node_t	*insert_at_head(node_t *head, node_t *node_to_insert)
{
	node_to_insert->next = head;
	return (node_to_insert);
}

int	main(void)
{
	node_t *head = NULL;
	node_t *temp;

	for (int i = 0; i < 25; i++)
	{
		temp = create_new_node(i);
		head = insert_at_head(head, temp);
	}

	printlist(head);
	return (0);
}
