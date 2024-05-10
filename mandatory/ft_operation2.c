/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:51:45 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/10 11:26:21 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap(t_list **lst, char	*str)
{
	t_list	*c;

	if (!*lst || !(*lst)->next)
		return ;
	c = (*lst)->next;
	(*lst)->next = c->next;
	c->next = *lst;
	(*lst) = c;
	if (str)
		write(1, str, ft_strlen(str));
}

void	ss(t_list **sa, t_list **sb)
{
	swap(sa, NULL);
	swap(sb, NULL);
	write(1, "ss\n", 4);
}

void	push_s1(t_list **s1, t_list **s2, char	*str)
{
	t_list	*tmp;

	if (!*s2)
		return ;
	tmp = *s2;
	*s2 = (*s2)->next;
	tmp->next = NULL;
	ft_lstadd_front(s1, tmp);
	if (str)
		write(1, str, ft_strlen(str));
}

void	ft_index(t_list **s1, t_list *node)
{
	t_list	*tmp;

	if (!s1 || !*s1)
		return ;
	tmp = *s1;
	while (tmp)
	{
		if (tmp->content > node->content)
			tmp->index++;
		else
			node->index++;
		tmp = tmp->next;
	}
}

void	ft_position(t_list **s1)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *s1;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}
