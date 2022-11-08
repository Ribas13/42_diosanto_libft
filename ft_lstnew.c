/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:25:57 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/08 15:29:54 by diosanto         ###   ########.fr       */
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

node_t	*insert_at_head(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return (node_to_insert);
}

node_t	*find_node(node_t *head, int value)
{
	node_t	*temp = head;
	while (temp != NULL)
	{
		if (temp->value == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	*insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
	newnode->next = node_to_insert_after->next;
	node_to_insert_after->next = newnode;
}

int	main(void)
{
	node_t *head = NULL;
	node_t *temp;

	for (int i = 0; i < 25; i++)
	{
		temp = create_new_node(i);
		insert_at_head(&head, temp);
	}


	temp = find_node(head, 15);
	insert_after_node(temp, create_new_node(75));

	printf("found node with value %d\n", temp->value);
	printlist(head);
	return (0);
}
