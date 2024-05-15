/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation2_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:51:45 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/15 17:51:03 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

t_list	*ft_lstnew2(char *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->con = content;
	node->next = NULL;
	return (node);
}
