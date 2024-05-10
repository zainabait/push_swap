/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:41:02 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/09 14:19:06 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmax(t_list *lst)
{
	t_list	*tmp;
	t_list	*max;

	tmp = lst;
	max = tmp;
	while (tmp)
	{
		if (tmp->content > max->content)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

t_list	*ft_lstmin(t_list *lst)
{
	t_list	*tmp;
	t_list	*min;

	tmp = lst;
	min = tmp;
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	**ft_free2(char **arr)
{
	size_t	j;

	if (!arr)
		return (NULL);
	j = 0;
	while (arr[j])
	{
		free (arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

int	lst_size(t_list *lst)
{
	int		i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*lst2;
// 	t_list	*max = NULL;

// 	lst = ft_lstnew(&lst, 10);
// 	ft_lstadd_back(&lst, ft_lstnew(&lst,-3));
// 	ft_lstadd_back(&lst, ft_lstnew(&lst,2));
// 	// lst2 = ft_lstnew(4);
// 	// ft_lstadd_back(&lst2, ft_lstnew(5));
// 	// ft_lstadd_back(&lst2, ft_lstnew(6));
// 	// rrr(lst, &lst2);
// 	// max = ft_lstmin(lst);
// 	// printf("%d", max->content);
// 	// push_s1(&lst2, &lst);
// 	// while (lst)
// 	// {
// 	// 	// printf("%d\n", (lst)->content);
// 	// 	printf("%d\n", (lst)->index);
// 	// 	lst = (lst)->next;
// 	// }
// 	ft_lstclear(&lst);
// 	// atexit(ff);
// 	// printf("%d", max->content);
// 	// puts("\n\n");
// 	// while (lst2)
// 	// {
// 	// 	printf("%d\n", lst2->content);
// 	// 	lst2 = lst2->next;
// 	// }
// }