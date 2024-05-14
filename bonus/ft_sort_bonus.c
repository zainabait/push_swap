/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:54:06 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/14 19:52:08 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_search(char	*mv)
{
	char	**ope;
	char	*j;
	int		i;

	j = "sa sb ss pa pb ra rb rr rra rrb rrr";
	ope = ft_split(j, ' ');
	i = 0;
	while (ope[i])
	{
		j = ft_strjoin(ope[i], "\n");
		if (ft_strcmp(j, mv) == 0)
			return (free(j), ft_free2(ope), 1);
		free(j);
		i++;
	}
	return (ft_free2(ope), 0);
}

int	ft_sort(t_list **a, t_list **b)
{
	char	*mv;
	t_list	*lst;

	lst = NULL;
	mv = get_next_line(0);
	while (mv)
	{
		if (!ft_search(mv))
			(ft_lstclear(&lst), ft_lstclear(a), ft_error("Error\n"));
		ft_lstadd_back(&lst, ft_lstnew2(mv));
		mv = get_next_line(0);
	}
	ft_op(a, b, lst);
	if (ft_check_sort(a) && !(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (free(mv), ft_lstclear(&lst), 0);
}

void	ft_op2(t_list **a, t_list **b, t_list *lst)
{
	if (ft_strcmp(lst->con, "rb\n") == 0)
		rotate_s1(b, NULL);
	else if (ft_strcmp(lst->con, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(lst->con, "rra\n") == 0)
		rrs1(a, NULL);
	else if (ft_strcmp(lst->con, "rrb\n") == 0)
		rrs1(b, NULL);
	else if (ft_strcmp(lst->con, "rrr\n") == 0)
		rrr(a, b);
}

void	ft_op(t_list **a, t_list **b, t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		if (ft_strcmp(lst->con, "sa\n") == 0)
			swap(a, NULL);
		else if (ft_strcmp(lst->con, "sb\n") == 0)
			swap(b, NULL);
		else if (ft_strcmp(lst->con, "ss\n") == 0)
			ss(a, b);
		else if (ft_strcmp(lst->con, "pa\n") == 0)
			push_s1(a, b, NULL);
		else if (ft_strcmp(lst->con, "pb\n") == 0)
			push_s1(b, a, NULL);
		else if (ft_strcmp(lst->con, "ra\n") == 0)
			rotate_s1(a, NULL);
		else
			ft_op2(a, b, lst);
		lst = lst->next;
	}
}

int	ft_check_sort(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
