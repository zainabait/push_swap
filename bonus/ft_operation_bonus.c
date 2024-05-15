/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:02:52 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/15 17:50:50 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate_s1(t_list **s1, char *str)
{
	t_list	*tmp;

	if (!*s1 || !(*s1)->next)
		return ;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = NULL;
	ft_lstadd_back(s1, tmp);
	if (str)
		write(1, str, ft_strlen(str));
}

void	rr(t_list **sa, t_list **sb)
{
	rotate_s1(sa, NULL);
	rotate_s1(sb, NULL);
}

void	rrs1(t_list **s1, char *str)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!*s1 || !(*s1)->next)
		return ;
	tmp = ft_lstlast(*s1);
	tmp1 = *s1;
	while ((tmp1)->next->next)
		(tmp1) = (tmp1)->next;
	tmp1->next = NULL;
	ft_lstadd_front(s1, tmp);
	if (str)
		write(1, str, ft_strlen(str));
}

void	rrr(t_list **sa, t_list **sb)
{
	rrs1(sa, NULL);
	rrs1(sb, NULL);
}
