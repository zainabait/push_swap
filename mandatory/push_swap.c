/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:24:12 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/10 15:48:57 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_stack(char	**s)
{
	int		i;
	t_list	*lst_a;
	t_list	*lst_b;
	t_list	*tmp;

	lst_a = NULL;
	lst_b = NULL;
	i = -1;
	while (s[++i])
		ft_lstadd_back(&lst_a, ft_lstnew(&lst_a, ft_atoi(s[i])));
	ft_position(&lst_a);
	tmp = lst_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			break ;
		if (!tmp->next->next)
			exit(0);
		tmp = tmp->next;
	}
	(i <= 3) && ft_sort_3(&lst_a);
	(i == 4) && ft_sort_4(&lst_a, &lst_b);
	(i == 5) && ft_sort_5(&lst_a, &lst_b);
	(i > 5) && ft_sort(&lst_a, &lst_b, i);
	(ft_lstclear(&lst_a), ft_lstclear(&lst_b));
}

void ff()
{
	system("leaks push_swap");
}

int	main(int argc, char *argv[])
{
	t_swap	t;

	t.j = 0;
	t.join = NULL;
	if (argc > 1)
	{
		while (argv[++t.j])
		{
			t.k = 0;
			while (argv[t.j][t.k] == 32)
				t.k++;
			(!argv[t.j][t.k]) && (ft_error("Error"));
			t.sp = ft_strjoin(argv[t.j], " ");
			(t.join2 = ft_strjoin(t.join, t.sp), free(t.join), t.join = t.join2, free(t.sp));
		}
		t.j = -1;
		(t.s = ft_split(t.join, ' '), free(t.join));
		while (t.s[++t.j])
		{
			t.k = t.j;
			(!t.s[t.k + 1]) && ft_atoi(t.s[t.j]);
			while (t.s[++t.k])
				(ft_atoi(t.s[t.j]) == ft_atoi(t.s[t.k])) && ft_error("Error\n");
		}
		
		(ft_stack(t.s), ft_free2(t.s));
		// atexit(ff);
	}
}
