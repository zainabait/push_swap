/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:54:06 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/10 12:13:49 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_3(t_list **lst)
{
	if (!*lst || !(*lst)->next)
		return (0);
	if ((*lst) == ft_lstmax((*lst)))
		rotate_s1(lst, "ra\n");
	else if ((*lst)->next == ft_lstmax((*lst)))
		rrs1(lst, "rra\n");
	if ((*lst)->content > (*lst)->next->content)
		swap(lst, "sa\n");
	return (0);
}

int	ft_sort_4(t_list **a, t_list **b)
{
	while ((*a) != ft_lstmin((*a)))
	{
		if ((*a)->next == ft_lstmin((*a)))
			swap(a, "sa\n");
		else
			rrs1(a, "rra\n");
	}
	push_s1(b, a, "pb\n");
	ft_sort_3(a);
	push_s1(a, b, "pa\n");
	return (0);
}

int	ft_sort_5(t_list **a, t_list **b)
{
	while ((*a) != ft_lstmin((*a)))
	{
		if ((*a)->next == ft_lstmin((*a)))
			swap(a, "sa\n");
		else
			rrs1(a, "rra\n");
	}
	push_s1(b, a, "pb\n");
	ft_sort_4(a, b);
	push_s1(a, b, "pa\n");
	return (0);
}

int	ft_sort(t_list **a, t_list **b, int size)
{
	int	j;
	int	i;

	i = 0;
	if (size <= 100)
		j = 16;
	else
		j = 36;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			push_s1(b, a, "pb\n");
			i++;
		}
		else if ((*a)->index <= i + j)
		{
			push_s1(b, a, "pb\n");
			rotate_s1(b, "rb\n");
			i++;
		}
		else
			rotate_s1(a, "ra\n");
	}
	return (ft_push_a(a, b), 0);
}

void	ft_push_a(t_list **a, t_list **b)
{
	while ((*b))
	{
		ft_position(b);
		if (*b == ft_lstmax(*b))
			push_s1(a, b, "pa\n");
		else if (ft_lstmax(*b)->position <= lst_size(*b) / 2)
			rotate_s1(b, "rb\n");
		else
			rrs1(b, "rrb\n");
	}
}
