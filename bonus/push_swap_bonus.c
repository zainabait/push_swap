/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:27:20 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/15 18:08:07 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_stack(char	**s)
{
	int		i;
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	i = -1;
	while (s[++i])
		ft_lstadd_back(&lst_a, ft_lstnew(ft_atoi(s[i])));
	ft_sort(&lst_a, &lst_b);
	ft_lstclear(&lst_a);
}

void	ft_double(t_swap t)
{
	t.j = -1;
	while (t.s[++t.j])
	{
		t.k = t.j;
		(!t.s[t.k + 1]) && ft_atoi(t.s[t.j]);
		while (t.s[++t.k])
		{
			if (ft_atoi(t.s[t.j]) == ft_atoi(t.s[t.k]))
				(ft_free2(t.s), ft_error("Error\n"));
		}
	}
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
			t.join2 = ft_strjoin(t.join, t.sp);
			(free(t.join), t.join = t.join2, free(t.sp));
		}
		t.s = ft_split(t.join, ' ');
		free(t.join);
		ft_double(t);
		(ft_stack(t.s), ft_free2(t.s));
	}
}
