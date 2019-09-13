/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:53:56 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/13 09:49:45 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"
#include "libft/libft.h"

void	sort_3(t_lst **head)
{
	if ((*head)->data > (*head)->next->data && (*head)->next->data <
		(*head)->next->next->data && (*head)->next->next->data > (*head)->data)
	{
		sa(*head);
		ft_putendl("sa");
	}
	else if ((*head)->data > (*head)->next->data && (*head)->next->data >
		(*head)->next->next->data && (*head)->next->next->data < (*head)->data)
	{
		sa(*head);
		rra(head);
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if ((*head)->data > (*head)->next->data && (*head)->next->data <
		(*head)->next->next->data && (*head)->next->next->data < (*head)->data)
	{
		ra(head);
		ft_putendl("ra");
	}
	else if ((*head)->data < (*head)->next->data && (*head)->next->data >
		(*head)->next->next->data && (*head)->next->next->data > (*head)->data)
	{
		sa(*head);
		ra(head);
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if ((*head)->data < (*head)->next->data && (*head)->next->data >
		(*head)->next->next->data && (*head)->next->next->data < (*head)->data)
	{
		rra(head);
		ft_putendl("rra");
	}
}

void	sort_4(t_lst *head, t_lst *box)
{
	int minimum;

	head = head;
	minimum = 0;
	minimum = min(head);
	if (minimum == head->data)
	{
		pb(&box, &head, head->data);
		ft_putendl("pb");
	}
	else if (minimum == head->next->data)
	{
		sa(head);
		pb(&box, &head, head->data);
		ft_putendl("sa");
		ft_putendl("pb");
	}
	else if (minimum == head->next->next->data)
	{
		rra(&head);
		rra(&head);
		pb(&box, &head, head->data);
		ft_putendl("rra");
		ft_putendl("rra");
		ft_putendl("pb");
	}
	else if (minimum == head->next->next->next->data)
	{
		rra(&head);
		pb(&box, &head, head->data);
		ft_putendl("rra");
		ft_putendl("pb");
	}
	sort_3(&head);
	pa(&head, &box, box->data);
	ft_putendl("pa");
}

void	sort_5(t_lst *head, t_lst *box)
{
	int minimum;
	int count;

	head = head;
	minimum = 0;
	count = 0;
	minimum = min(head);
	if (minimum == head->data)
	{
		pb(&box, &head, head->data);
		ft_putendl("pb");
	}
	else if (minimum == head->next->data)
	{
		sa(head);
		pb(&box, &head, head->data);
		ft_putendl("sa");
		ft_putendl("pb");
	}
	else if (minimum == head->next->next->data)
	{
		ra(&head);
		sa(head);
		pb(&box, &head, head->data);
		ft_putendl("ra");
		ft_putendl("sa");
		ft_putendl("pb");
	}
	else if (minimum == head->next->next->next->data)
	{
		rra(&head);
		rra(&head);
		pb(&box, &head, head->data);
		ft_putendl("rra");
		ft_putendl("rra");
		ft_putendl("pb");
	}
	else if (minimum == head->next->next->next->next->data)
	{
		rra(&head);
		pb(&box, &head, head->data);
		ft_putendl("rra");
		ft_putendl("pb");
	}
	sort_4(head, box);
	pa(&head, &box, box->data);
	ft_putendl("pa");
}

int		min(t_lst *head)
{
	int min;

	min = head->data;
	while (head != NULL)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}
